# RETEST
## Easy to use single header, unit tesing library.

## Four simple steps to test your programs
- Init test
- Start test
- Add test
- End tset

```c
#include "retest.h"

RETEST_INIT_TESTING // initializes the test

//  testing function
void testing_function1()
{
    int left = get_left();
    int right = get_right();
    RETEST_ASSERT(left < right); // asserts and expression
}

void testing_function2()
{
    RETEST_ASSERT_EQ(1, 1); // checks if left and right are equal
}

RETEST_START_TEST       // call to start the function
// add your function here
// NOTE: functions must not take any argument
RETEST_ADD_TEST(testing_function1)  
RETEST_ADD_TEST(testing_function2)
// finally end the test result
RETEST_END_TEST
```

