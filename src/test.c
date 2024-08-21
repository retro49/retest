#include <stdbool.h>
#include "../include/retest.h"

// initialize the test
RETEST_TESTING_INIT

void test_function1()
{
        RETEST_ASSERT(true);
}

void test_function2()
{
        int left = 0;
        int right = 0;
        RETEST_ASSERT_EQ(left, right)
}

void test_function3()
{
        int left = 0;
        int right = 1;
        RETEST_ASSERT_NE(left, right)
}

RETEST_TESTING_START
RETEST_TESTING_ADD(test_function1)
RETEST_TESTING_ADD(test_function2)
RETEST_TESTING_ADD(test_function3)
RETEST_TESTING_END
