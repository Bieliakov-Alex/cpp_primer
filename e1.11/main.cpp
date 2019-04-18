#include <iostream>

int main() {
  std::cout << "Please, enter two numbers:" << std::endl;
  int first = 0, second = 0;
  std::cin >> first >> second;
  while (first < second + 1) {
    std::cout << first++ << std::endl;
  }
  return 0;
}
