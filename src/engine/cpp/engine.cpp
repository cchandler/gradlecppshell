#include<engine.hpp>

void Moo::setAValue() {
  b.val = 8;
}

void Moo::incCounter() {
  ++counter;
}

int Moo::getCounter() {
  return counter;
}

Blah* allocateBlah() {
  Blah* b;
  b = new Blah;
  (*b).val = 6;
  return b;
}