#include "unity.h"
#include "processing.h"

void setUp(void) {}
void tearDown(void) {}

void test_addition_positive_numbers(void) {
    TEST_ASSERT_EQUAL_INT(5, addition(2, 3));
}

void test_addition_negative_numbers(void) {
    TEST_ASSERT_EQUAL_INT(-5, addition(-2, -3));
}

void test_addition_positive_and_negative(void) {
    TEST_ASSERT_EQUAL_INT(1, addition(4, -3));
}

void test_addition_zero(void) {
    TEST_ASSERT_EQUAL_INT(4, addition(4, 0));
    TEST_ASSERT_EQUAL_INT(0, addition(0, 0));
}

void test_addition_large_numbers(void) {
    TEST_ASSERT_EQUAL_INT(2000000000, addition(1000000000, 1000000000));
}
