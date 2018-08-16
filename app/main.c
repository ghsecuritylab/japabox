/*
 **/
#include <string.h>

#include "hardware.h"
#include "usb_cdc.h"
#include "packet_manager.h"
#include "clock.h"
#include "fsl_gpio.h"
#include "analog.h"

#include "board.h"
/*******************************************************************************
* Definitions
******************************************************************************/
#define BOARD_LED_GPIO       BOARD_LED_RED_GPIO
#define BOARD_LED_GPIO_PIN   BOARD_LED_RED_GPIO_PIN

/*******************************************************************************
* Variables
******************************************************************************/

/*******************************************************************************
* Prototypes
******************************************************************************/

/*******************************************************************************
* Code
******************************************************************************/

int main(void)
{
	gpio_pin_config_t led_config = { kGPIO_DigitalOutput, 0 };
	hardware_init();
	usb_cdc_init();
	clock_init();
    
	char * transmit_payload = "HELLO HITESH HOW ARE YOU???\r\n";
	uint32_t transmit_payload_length = strlen(transmit_payload);
	
	uint32_t last_usb_send_tick = clock_get_tick();
	uint8_t command = 0x01;
	
	GPIO_PinInit(BOARD_LED_GPIO, BOARD_LED_GPIO_PIN, &led_config);
	
	while (1)
	{
		usb_cdc_task();
		
		if (clock_get_elapsed_time_ms(clock_get_tick(), last_usb_send_tick) >= 1000)
		{
			analog_init();
			GPIO_TogglePinsOutput(BOARD_LED_GPIO, 1u << BOARD_LED_GPIO_PIN);
			packet_manager_send_packet(command, (uint8_t *)transmit_payload, transmit_payload_length);
			last_usb_send_tick = clock_get_tick();
		}
	}
}
