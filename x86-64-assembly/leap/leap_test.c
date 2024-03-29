// Version: 1.5.1

#include <stdbool.h>

#include "vendor/unity.h"

extern bool leap_year(int year);

void setUp(void) {
}

void tearDown(void) {
}

void test_year_not_divisible_by_4_in_common_year(void) {
    TEST_ASSERT_FALSE(leap_year(2015));
}

void test_year_divisible_by_2_not_divisible_by_4_in_common_year(void) {
    TEST_ASSERT_FALSE(leap_year(1970));
}

void test_year_divisible_by_4_not_divisible_by_100_in_leap_year(void) {
    TEST_ASSERT_TRUE(leap_year(1996));
}

void test_year_divisible_by_100_not_divisible_by_400_in_common_year(void) {
    TEST_ASSERT_FALSE(leap_year(2100));
}

void test_year_divisible_by_400_in_leap_year(void) {
    TEST_ASSERT_TRUE(leap_year(2000));
}

void test_year_divisible_by_200_not_divisible_by_400_in_common_year(void) {
    TEST_ASSERT_FALSE(leap_year(1800));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_year_not_divisible_by_4_in_common_year);
    RUN_TEST(test_year_divisible_by_2_not_divisible_by_4_in_common_year);
    RUN_TEST(test_year_divisible_by_4_not_divisible_by_100_in_leap_year);
    RUN_TEST(test_year_divisible_by_100_not_divisible_by_400_in_common_year);
    RUN_TEST(test_year_divisible_by_400_in_leap_year);
    RUN_TEST(test_year_divisible_by_200_not_divisible_by_400_in_common_year);
    return UNITY_END();
}
