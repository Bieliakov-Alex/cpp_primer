#include <iostream>
#include <vector>

int main() {
  int element = 0;
  std::vector<int> elements;
  while (std::cin >> element) {
    elements.push_back(element);
  }
  for (auto i : elements) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
  return 0;
}
