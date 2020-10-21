#include "../src/func.h"

#include <stdio.h>
#include <stdlib.h>

#include "../ctest/ctest.h"

CTEST(check_input, check_input_bad_1) {
  // Given
  int num = 1;
  // When
  int real = check_input(num);
  // Then
  const int expected = 0;

  ASSERT_EQUAL(expected, real);
}

CTEST(check_input, check_input_bad_2) {
  // Given
  int num = 1111;
  // When
  int real = check_input(num);
  // Then
  const int expected = 0;

  ASSERT_EQUAL(expected, real);
}

CTEST(check_input, check_input_good_1) {
  // Given
  int num = 4326;
  // When
  int real = check_input(num);
  // Then
  const int expected = 1;

  ASSERT_EQUAL(expected, real);
}

CTEST(check_input, check_input_good_2) {
  // Given
  int num = 5431;
  // When
  int real = check_input(num);
  // Then
  const int expected = 1;

  ASSERT_EQUAL(expected, real);
}

CTEST(generate_number, generate_number_good_1) {
  // Given
  // When
  int real = generate_number();
  // Then
  const int exp2 = 9876;
  const int exp1 = 1234;

  ASSERT_INTERVAL(exp1, exp2, real);
}

CTEST(generate_number, generate_number_good_2) {
  // Given
  // When
  int real = generate_number();
  // Then
  const int exp2 = 9876;
  const int exp1 = 1234;

  ASSERT_INTERVAL(exp1, exp2, real);
}
