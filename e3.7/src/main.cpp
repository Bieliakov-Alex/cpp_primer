#include <cctype>
#include <iostream>

int main() {
  std::string string;
  getline(std::cin, string);
  for (auto c : string) {
    if (!std::ispunct(c)) {
      std::cout << c;
    }
  }
  std::cout << std::endl;
  return 0;
}
