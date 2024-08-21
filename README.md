# RETEST
## Easy to use single header, unit tesing library.

### Four simple steps to test your programs
- Init test
- Start test
- Add test
- End tset

```c
// initialize the test
RETEST_TESTING_INIT

// NOTE: test functions does not take any argument
void test_function1()
{
        RETEST_ASSERT(true);
}

// NOTE: test functions does not take any argument
void test_function2()
{
        int left = 0;
        int right = 0;
        RETEST_ASSERT_EQ(left, right)
}

// NOTE: test functions does not take any argument
void test_function3()
{
        int left = 0;
        int right = 1;
        RETEST_ASSERT_NE(left, right)
}

// start the test
RETEST_TESTING_START
// add your function here
// NOTE: functions must not take any argument
RETEST_TESTING_ADD(test_function1)
RETEST_TESTING_ADD(test_function2)
RETEST_TESTING_ADD(test_function3)
// finally end the test result
RETEST_TESTING_END
```
