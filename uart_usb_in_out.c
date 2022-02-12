#include "uart_usb_in_out.h"

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include "app_uart.h"
#include "nrf_delay.h"
#include "nrf_pwr_mgmt.h"
#include "nrf_log.h"
#include "nrf_log_ctrl.h"

#define UART_BUFFER_SIZE 512

static uint16_t uart_tx_buffer_length = 0x00;
static uint8_t uart_tx_buffer[UART_BUFFER_SIZE] = { 0x00 };

static void uart_usb_in_out_data_send(uint8_t *data, uint16_t size) {

	for (uint16_t i = 0; i < size; i++) {

		while (app_uart_put(data[i]) != NRF_SUCCESS) {

		}

	}

	while (app_uart_put('\r') != NRF_SUCCESS) {

	}

	while (app_uart_put('\n') != NRF_SUCCESS) {

	}

}

void set_uart_usb_in_out_write_string(char *data) {

	uart_tx_buffer_length = 0;
	memset(uart_tx_buffer, 0x00, sizeof(uart_tx_buffer));

	uart_tx_buffer_length = sprintf((char*) uart_tx_buffer, "%s\r\n", data);

	uart_usb_in_out_data_send(uart_tx_buffer, uart_tx_buffer_length);

}

void set_uart_usb_in_out_find_i2c_address(uint8_t address) {

	uart_tx_buffer_length = 0;
	memset(uart_tx_buffer, 0x00, sizeof(uart_tx_buffer));

	uart_tx_buffer_length = sprintf((char*) uart_tx_buffer,
			"I2C Address : %02X\r\n", address);

	uart_usb_in_out_data_send(uart_tx_buffer, uart_tx_buffer_length);

}

void set_uart_usb_in_out_mac_address(uint8_t *mac_address) {

	uart_tx_buffer_length = 0;
	memset(uart_tx_buffer, 0x00, sizeof(uart_tx_buffer));

	uart_tx_buffer_length = sprintf((char*) uart_tx_buffer, "MAC Address : ");

	for (uint8_t i = 0; i < 8; i++) {

		uart_tx_buffer_length += sprintf(
				(char*) uart_tx_buffer + uart_tx_buffer_length, "%02X",
				mac_address[i]);

	}

	uart_tx_buffer_length += sprintf(
			(char*) uart_tx_buffer + uart_tx_buffer_length, "\r\n");

	uart_usb_in_out_data_send(uart_tx_buffer, uart_tx_buffer_length);

}

