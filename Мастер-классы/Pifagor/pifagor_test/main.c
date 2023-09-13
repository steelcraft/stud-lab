#include "unity.h"
#include "pifagor.h"
//#include "file_to_test.h"

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

void test_pifagor_3_and_4_should_return_5(void) {
    double result = pifagor(3.0, 4.0);
    TEST_ASSERT_EQUAL_FLOAT(5.0, result);
}

// not needed when using generate_test_runner.rb
int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_pifagor_3_and_4_should_return_5);
    return UNITY_END();
}
