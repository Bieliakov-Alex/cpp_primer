#include <iostream>

int main() {
  std::string first, second;
  std::cin >> first >> second;
  if (first == second) {
    std::cout << "First and Second strings are equal!" << std::endl;
  } else {
    std::cout << "First and Second aren't equal!" << std::endl;
    if (first > second) {
      std::cout << "First is larger than Second!" << std::endl;
    } else {
      std::cout << "Second is larger than First!" << std::endl;
    }
  }
  return 0;
}
