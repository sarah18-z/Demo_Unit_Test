#include "unity.h"
#include "processing.h"
#include "mock_uart.h"

void setUp(void) { mock_uart_Init(); }
void tearDown(void) { mock_uart_Verify(); mock_uart_Destroy(); }

void test_processing_and_send_positive(void) {
    uart_send_CMockExpect(__LINE__, "42");
    processing_and_send(42);
}

void test_processing_and_send_zero(void) {
    uart_send_CMockExpect(__LINE__, "0");
    processing_and_send(0);
}

void test_processing_and_send_negative(void) {
    uart_send_CMockExpect(__LINE__, "-123");
    processing_and_send(-123);
}

void test_processing_and_send_large_number(void) {
    uart_send_CMockExpect(__LINE__, "1000000");
    processing_and_send(1000000);
}
