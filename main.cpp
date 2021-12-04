#include <cassert>
#include <iostream>

#include "solution.h"

using namespace std;

void TestBinarySearch() {
  Solution s;
  {
    vector<int> numbers;
    assert(-1 == s.search(numbers, 0));
  }
  {
    vector<int> numbers;
    assert(-1 == s.search(numbers, 1));
  }
  {
    vector<int> numbers{0};
    assert(0 == s.search(numbers, 0));
    assert(-1 == s.search(numbers, 2));
  }
  {
    vector<int> numbers{0, 2, 4, 12};
    assert(1 == s.search(numbers, 2));
    assert(3 == s.search(numbers, 12));
  }
  {
    vector<int> numbers{10, 20, 30};
    assert(0 == s.search(numbers, 10));
    assert(1 == s.search(numbers, 20));
    assert(2 == s.search(numbers, 30));
    assert(-1 == s.search(numbers, 5));
  }
}

int main() {
  TestBinarySearch();
  std::cout << "Ok!" << std::endl;
  return 0;
}
