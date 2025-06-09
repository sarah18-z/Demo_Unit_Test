#include "unity.h"

void test_processing_and_send_positive(void);
void test_processing_and_send_zero(void);
void test_processing_and_send_negative(void);
void test_processing_and_send_large_number(void);

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_processing_and_send_positive);
    RUN_TEST(test_processing_and_send_zero);
    RUN_TEST(test_processing_and_send_negative);
    RUN_TEST(test_processing_and_send_large_number);
    return UNITY_END();
}
