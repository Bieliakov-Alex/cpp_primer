#include <iostream>
#include <string>
#include <vector>

int main() {
  std::string element;
  std::vector<std::string> elements;
  while (std::cin >> element) {
    elements.push_back(element);
  }
  for (auto i : elements) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
  return 0;
}
