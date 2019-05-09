#include <iostream>

int main() {
  std::string first, second;
  std::cin >> first >> second;
  if (first.size() == second.size()) {
    std::cout << "First and Second strings are equal!" << std::endl;
  } else {
    std::cout << "First and Second aren't equal!" << std::endl;
    if (first.size() > second.size()) {
      std::cout << "First is longer than Second!" << std::endl;
    } else {
      std::cout << "Second is longer than First!" << std::endl;
    }
  }
  return 0;
}
