#include <iostream>
#include <map>
#include <vector>
#include <assert.h>

#include <engine.hpp>

int someFunc() {
  return 5;
}

int main() {
  std::cout << "Working?" << std::endl;
  auto i = someFunc();

  Cow* n = new Cow();
  (*n).setAValue();
  // (*n).b.val = 8;
  
  std::vector<int> v;
  std::map<int, float> map;

  map.insert(std::make_pair(1,2.5));

  for(auto& pair: map) {
    std::cout << "Key: " << pair.first << " " << "Value: " << pair.second << std::endl;
  }

  Blah b;
  b.val = someFunc();

  auto b1 = allocateBlah();
  std::cout << "Print num: " << b1->val << std::endl;
  std::cout << "Print num: " << (*n).b.val << std::endl;
  delete b1;

  v.push_back(2);
  assert(v.size() == 1);

  std::cout << "Value that was inserted: " << v.back() << std::endl;
  return 0;
}