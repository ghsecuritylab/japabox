/*
 **/
#include <string.h>

#include "usb_cdc.h"

/*******************************************************************************
* Definitions
******************************************************************************/
#define MAX_USB_PAYLOAD      255

/*******************************************************************************
* Prototypes
******************************************************************************/
typedef struct
{
	uint8_t start_byte;
	uint8_t version;
	uint8_t length;
	uint8_t command;
	uint8_t payload_and_checksum[MAX_USB_PAYLOAD];
} usb_packet_t;

/*******************************************************************************
* Variables
******************************************************************************/
static usb_packet_t usb_packet;


/*******************************************************************************
* Code
******************************************************************************/
void packet_manager_send_packet(uint8_t command, uint8_t * payload, uint8_t length)
{
	enum
	{
		USB_PACKET_START_BYTE = 0xA5,
		USB_PACKET_VERSION = 0x00,
	};
	
	usb_packet.start_byte = USB_PACKET_START_BYTE;	
	usb_packet.version = USB_PACKET_VERSION;
	usb_packet.length = length;
	usb_packet.command = command;
	
	int i;
	uint8_t checksum = usb_packet.version + usb_packet.length + usb_packet.command;
	
	for (i = 0; i <= length; i++)
	{
		usb_packet.payload_and_checksum[i] = payload[i];
		checksum += payload[i];
	}
	
	usb_packet.payload_and_checksum[length] = checksum;
	
	usb_cdc_write((uint8_t *)&usb_packet, sizeof(usb_packet_t) - MAX_USB_PAYLOAD + length + 1);
}