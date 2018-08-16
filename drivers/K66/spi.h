#ifndef _SPI_H_
#define _SPI_H_

#include <stdint.h>
#include <stdbool.h>
/*******************************************************************************
 * Definitions
 ******************************************************************************/


/*******************************************************************************
* API
******************************************************************************/
void spi_init(uint8_t chip_select);
void spi_deinit(void);
bool spi_transaction(uint8_t * write_data, uint8_t * read_data, uint8_t data_size, uint8_t chip_select);

#endif /* _SPI_H_ */
