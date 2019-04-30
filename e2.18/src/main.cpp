#include <iostream>

void print(int first, int second, int pfirst, int psecond) {
  std::cout << "First: " << first << std::endl
            << "Second: " << second << std::endl
            << "PFirst: " << pfirst << std::endl
            << "PSecond: " << psecond << std::endl;
  return;
}

int main() {
  int first = 1, second = 2;
  int *pfirst = &first, *psecond = &second;
  print(first, second, *pfirst, *psecond);
  pfirst = psecond;
  print(first, second, *pfirst, *psecond);
  pfirst = &first;
  print(first, second, *pfirst, *psecond);
  *pfirst = 4;
  print(first, second, *pfirst, *psecond);
  return 0;
}
