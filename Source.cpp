#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "func.hpp"

TEST_CASE("Simple test") {
    CHECK(factorial(5) == 120);
    CHECK_THROWS_AS(factorial(-1), std::invalid_argument);
    CHECK(factorial(3) == 6);
    CHECK(factorial(9) == 362880);
}
TEST_CASE("Factorial of 0") {
    int n = 0;
    CHECK(factorial(n) == 1);
}

TEST_CASE("Factorial of positive number") {
    int n = 5;
    CHECK(factorial(n) == 120);
}

TEST_CASE("Factorial of negative number") {
    int n = -1;
    CHECK_THROWS_AS(factorial(n), std::invalid_argument);
}

TEST_CASE("Factorial of large number") {
    int n = 20;
    long long expected = 2432902008176640000;
    CHECK(factorial(n) == expected);
}
