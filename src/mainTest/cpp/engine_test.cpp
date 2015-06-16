#include "catch.hpp"
#include <engine.hpp>

TEST_CASE( "Testing an engine", "[engine]") {
  Cow* n = new Cow();
  (*n).setAValue();

  REQUIRE( (*n).b.val == 8);
  delete n;
}

TEST_CASE( "Incrementing a counter", "[engine]") {
  Cow* n = new Cow();

  REQUIRE((*n).getCounter() == 0);
  (*n).incCounter();
  REQUIRE((*n).getCounter() == 1);
}