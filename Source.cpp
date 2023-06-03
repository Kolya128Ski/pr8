#include <stdexcept>
using namespace std;
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

TEST_CASE("Simple test") {
    CHECK(factorial(5) == 120);
    CHECK_THROWS_AS(f(-1), invalid_argument);
    CHECK(factorial(3) == 6);
    CHECK(factorial(9) == 362880)
}
