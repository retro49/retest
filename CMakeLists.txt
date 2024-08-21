cmake_minimum_required(VERSION 3.30)
project(retest)

enable_testing()


set(RETEST_EXE_SRC ${CMAKE_SOURCE_DIR}/src/test.c)

add_executable(retest_test
        ${RETEST_EXE_SRC}
)

add_test(
        NAME retest_test
        COMMAND retest_test
)
