#ifndef UART_USB_IN_OUT_H_
#define UART_USB_IN_OUT_H_

#include <stdint.h>
#include <stdbool.h>
#include "board_define.h"

void set_uart_usb_in_out_write_string(char *data);

void set_uart_usb_in_out_find_i2c_address(uint8_t address);

void set_uart_usb_in_out_mac_address(uint8_t *mac_address);

#endif /* UART_USB_IN_OUT_H_ */
