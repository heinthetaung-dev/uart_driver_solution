#ifndef UART_API_H
#define UART_API_H

// Configure the UART hardware
// param1: port name
// param2: baudrate
// return: 0 on success (-1 on error)
int uart_configure(char *uart, int baud);

// Initialize UART connection
// return: UART_HANDLE on success (-1 on error)
int uart_open(char *uart);

// Close UART connection
// return: 0 on success (-1 on error)
int uart_close(char *uart);

// Write data to UART
// param1: port name
// param2: data
// param3: number of bytes to write
// return: 0 on success (-1 on error)
int uart_write(char *uart, char *data, int size);

// Read data from UART
// param1: port name
// param2: data
// param3: number of maximum bytes to read
// return: number of bytes read (-1 on error)
int uart_read(char *uart, char *data, int size);

// Register callback for UART receive
// param1: port name
// param2: function for receive data callback (for interrupt or DMA)
// return: 0 on success (-1 on error)
int uart_register_callback(char *uart, int (*fun)(char *data, int size));

#endif