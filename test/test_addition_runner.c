#include "unity.h"

void test_addition_positive_numbers(void);
void test_addition_negative_numbers(void);
void test_addition_positive_and_negative(void);
void test_addition_zero(void);
void test_addition_large_numbers(void);

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_addition_positive_numbers);
    RUN_TEST(test_addition_negative_numbers);
    RUN_TEST(test_addition_positive_and_negative);
    RUN_TEST(test_addition_zero);
    RUN_TEST(test_addition_large_numbers);
    return UNITY_END();
}
