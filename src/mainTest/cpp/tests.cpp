#define CATCH_CONFIG_MAIN
#include "catch.hpp"

struct Something {
  int a;
};

int someFunc() {
  return 5;
}

TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( someFunc() == 5 );
}