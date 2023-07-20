#ifdef TEST

#include "unity.h"

#include "my_sqrt.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_my_sqrt_25_should_return_5(void)
{
    double result = my_sqrt(25.0);
    TEST_ASSERT_EQUAL_FLOAT(5.0, result);
}
#endif // TEST
