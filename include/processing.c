#include "processing.h"
#include "uart.h"
#include <stdio.h>

int addition(int a, int b) {
    return a + b;
}

void processing_and_send(int val) {
    char buf[16];
    sprintf(buf, "%d", val);
    uart_send(buf);
}
