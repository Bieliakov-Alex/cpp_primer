#include <iostream>

int main() {
  std::string string;
  std::cin >> string;
  for (auto &c : string) {
    c = 'X';
  }
  std::cout << string << std::endl;
  return 0;
}
