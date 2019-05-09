#include <iostream>

int main() {
  std::string string, concatString;
  while (std::cin >> string) {
    concatString += string;
  }
  std::cout << concatString << std::endl;
  return 0;
}
