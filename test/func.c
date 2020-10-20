#include "../src/func.h"
#include "../ctest/ctest.h"
#include <stdio.h>
#include <stdlib.h>

CTEST(check_input, check_input_bad) {
//Given
int num = 1111;
//When
int real = check_input(num);
//Then
const int expected = 0;

ASSERT_EQUAL(expected, real);
}

CTEST(check_input, check_input_good) {
//Given
int num = 5431;
//When
int real = check_input(num);
//Then
const int expected = 1;

ASSERT_EQUAL(expected, real);
}

