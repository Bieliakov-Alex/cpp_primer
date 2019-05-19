#include <cctype>
#include <iostream>
#include <string>
#include <vector>

int main() {
  std::cout << "Start!" << std::endl;
  std::string word;
  std::vector<std::string> words;
  while (std::cin >> word) {
    words.push_back(word);
  }
  for (auto &i : words) {
    for (auto &j : i) {
      j = std::toupper(static_cast<unsigned char>(j));
    }
  }
  int count = 0;
  for (auto i : words) {
    ++count;
    std::cout << i;
    if (count == 8) {
      std::cout << std::endl;
      count = 0;
    } else {
      std::cout << " ";
    }
  }
  if (count != 0) {
    std::cout << std::endl;
  }
  return 0;
}
