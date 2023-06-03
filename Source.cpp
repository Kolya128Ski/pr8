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