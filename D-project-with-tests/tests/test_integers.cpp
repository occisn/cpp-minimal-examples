#include <catch_amalgamated.hpp>
#include "integers.hpp"

TEST_CASE("add tests", "[add]") {
    REQUIRE(add(12, 18) == 30);
    REQUIRE(add(7, 13) == 20);
}

// end
