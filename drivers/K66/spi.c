#include "fsl_device_registers.h"
#include "fsl_debug_console.h"
#include "board.h"

#include "pin_mux.h"
#include "clock_config.h"

#include "fsl_dspi.h"
/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define SPI_BASEADDR              SPI0
#define SPI_CLK_SRC               DSPI0_CLK_SRC
#define SPI_PCS_FOR_TRANSFER      kDSPI_MasterPcs0

#define TRANSFER_BAUDRATE         50000U /*! Transfer baudrate - 500k */

/*******************************************************************************
 * Prototypes
 ******************************************************************************/


/*******************************************************************************
 * Variables
 ******************************************************************************/

/*******************************************************************************
 * Code
 ******************************************************************************/
bool spi_transaction(uint8_t * write_data, uint8_t * read_data, uint8_t data_size, uint8_t chip_select)
{
	dspi_transfer_t masterXfer;
	
	/* Start master transfer */
	masterXfer.txData = write_data;
	masterXfer.rxData = read_data;
	masterXfer.dataSize = data_size;
	masterXfer.configFlags = kDSPI_MasterCtar0 | chip_select | kDSPI_MasterPcsContinuous;

	return (kStatus_Success == DSPI_MasterTransferBlocking(SPI_BASEADDR, &masterXfer));
}

void spi_init(uint8_t chip_select)
{
	uint32_t srcClock_Hz;
	uint32_t errorCount;
	uint32_t i;
	dspi_master_config_t spi_config;

	/* Master config */
	spi_config.whichCtar = kDSPI_Ctar0;
	spi_config.ctarConfig.baudRate = TRANSFER_BAUDRATE;
	spi_config.ctarConfig.bitsPerFrame = 8U;
	spi_config.ctarConfig.cpol = kDSPI_ClockPolarityActiveHigh;
	spi_config.ctarConfig.cpha = kDSPI_ClockPhaseFirstEdge;
	spi_config.ctarConfig.direction = kDSPI_MsbFirst;
	spi_config.ctarConfig.pcsToSckDelayInNanoSec = 1000000000U / TRANSFER_BAUDRATE;
	spi_config.ctarConfig.lastSckToPcsDelayInNanoSec = 1000000000U / TRANSFER_BAUDRATE;
	spi_config.ctarConfig.betweenTransferDelayInNanoSec = 1000000000U / TRANSFER_BAUDRATE;

	spi_config.whichPcs = chip_select;
	spi_config.pcsActiveHighOrLow = kDSPI_PcsActiveLow;

	spi_config.enableContinuousSCK = false;
	spi_config.enableRxFifoOverWrite = false;
	spi_config.enableModifiedTimingFormat = false;
	spi_config.samplePoint = kDSPI_SckToSin0Clock;

	srcClock_Hz = CLOCK_GetFreq(SPI_CLK_SRC);
	DSPI_MasterInit(SPI_BASEADDR, &spi_config, srcClock_Hz);
}

void spi_deinit(void)
{
	DSPI_Deinit(SPI_BASEADDR);
}
