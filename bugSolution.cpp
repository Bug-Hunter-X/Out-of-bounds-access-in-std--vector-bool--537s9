#include <iostream>
#include <vector>

int main() {
  std::vector<bool> vec;
  vec.push_back(true);
  vec.push_back(false);

  if (vec.size() > 1) {
    bool b = vec[1];
    std::cout << "Element at index 1: " << b << std::endl; // Accessing element at index 1
  }
  if (vec.size() > 2) {
    bool c = vec[2];
    std::cout << "Element at index 2: " << c << std::endl; // Accessing element at index 2 (out of bounds)
  } else {
    std::cout << "Index 2 is out of bounds" << std::endl;
  }
  return 0;
} 