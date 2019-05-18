#include <iostream>
#include <string>
#include <vector>

template <typename T> void show(std::vector<T> v, std::string prediction) {
  std::cout << "Size: " << v.size() << std::endl;
  std::cout << "Contents: ";
  for (auto i : v) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
  std::cout << "Prediction: " << prediction << std::endl;
}

int main() {
  std::vector<int> v1;                   // 0
  std::vector<int> v2(10);               // 10(0)
  std::vector<int> v3(10, 42);           // 10(42)
  std::vector<int> v4{10};               // 1(10)
  std::vector<int> v5{10, 42};           // 2(10, 42)
  std::vector<std::string> v6{10};       // 10("")
  std::vector<std::string> v7{10, "hi"}; // 10("hi")

  show(v1, "0");
  show(v2, "10(0)");
  show(v3, "10(42)");
  show(v4, "1(10)");
  show(v5, "2(10, 42)");
  show(v6, "10(\"\")");
  show(v7, "10(\"hi\")");
  return 0;
}
