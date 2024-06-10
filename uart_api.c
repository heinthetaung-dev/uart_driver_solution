#include "uart_api.h"

// create multiple mutex for UART0 to UARTn
int (*callback)(char *data, int size);

void uart_ISR() {
    // process receive interrupt
    // ...

    char *data;
    int size;
    callback(data, size);
}

int uart_configure(char *uart, int baud) {
    // configure based on the selected uart peripheral
    // configure uart I/O pins
    // configure uart clock frequency and baudrate
    // configure interrupt or DMA
}

int uart_open(char *uart) {
    // enable uart interrupts
    // enable uart clock
}

int uart_close(char *uart) {
    // disable uart interrupts
    // disable uart clock
    // release UART_HANDLE
}

int uart_write(char *uart, char *data, int size) {
    // lock mutex
    // write to uart write register
    // unlock mutex
}

int uart_read(char *uart, char *data, int size) {
    // lock mutex
    // read from uart read register
    // unlock mutex
}

int uart_register_callback(char *uart, int (*fun)(char *data, int size)) {
    // register the callback function
    callback = fun;
}
