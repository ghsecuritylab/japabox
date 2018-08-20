#include "board.h"
#include "music.h"
#include "fsl_sai.h"
#include "fsl_debug_console.h"

#include "pin_mux.h"
#include "clock_config.h"
#include "fsl_gpio.h"
#include "fsl_port.h"
/*******************************************************************************
 * Definitions
 ******************************************************************************/
/* SAI and I2C instance and clock */
#define DEMO_SAI             I2S0
#define DEMO_SAI_CLKSRC      kCLOCK_CoreSysClk
#define DEMO_SAI_CLK_FREQ    CLOCK_GetFreq(kCLOCK_CoreSysClk)

#define OVER_SAMPLE_RATE     (384U)

/*******************************************************************************
 * Prototypes
 ******************************************************************************/

/*******************************************************************************
 * Variables
 ******************************************************************************/
sai_handle_t txHandle = { 0 };
static volatile bool isFinished = false;
/*******************************************************************************
 * Code
 ******************************************************************************/
static void callback(I2S_Type *base, sai_handle_t *handle, status_t status, void *userData)
{
	isFinished = true;
}

/*!
 * @brief Main function
 */
int main(void)
{
	sai_config_t config;
	uint32_t mclkSourceClockHz = 0U;
	sai_transfer_format_t format;
	sai_transfer_t xfer;
	uint32_t temp = 0;
	uint32_t delayCycle = 500000;

	BOARD_InitPins();
	BOARD_BootClockRUN();
	BOARD_InitDebugConsole();

	SAI_TxGetDefaultConfig(&config);

	SAI_TxInit(DEMO_SAI, &config);

	/* Configure the audio format */
	format.bitWidth = kSAI_WordWidth16bits;
	format.channel = 0U;
	format.sampleRate_Hz = kSAI_SampleRate16KHz;

	format.masterClockHz = OVER_SAMPLE_RATE * format.sampleRate_Hz;

	format.protocol = config.protocol;
	format.stereo = kSAI_Stereo;
	format.isFrameSyncCompact = false;
	format.watermark = FSL_FEATURE_SAI_FIFO_COUNT / 2U;

	SAI_TransferTxCreateHandle(DEMO_SAI, &txHandle, callback, NULL);
	mclkSourceClockHz = DEMO_SAI_CLK_FREQ;
	SAI_TransferTxSetFormat(DEMO_SAI, &txHandle, &format, mclkSourceClockHz, format.masterClockHz);

	/*  xfer structure */
	temp = (uint32_t)music;
	xfer.data = (uint8_t *)temp;
	xfer.dataSize = MUSIC_LEN;
	SAI_TransferSendNonBlocking(DEMO_SAI, &txHandle, &xfer);

	while (1)
	{
	}
}
