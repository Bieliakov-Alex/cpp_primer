#include "Sales_item.h"
#include <iostream>

int main() {
  Sales_item item, currentItem;
  std::cin >> item;
  currentItem = item;
  int count = 1;
  while (std::cin >> item) {
    if (currentItem.isbn() == item.isbn()) {
      ++count;
    } else {
      std::cout << currentItem.isbn() << " : " << count << std::endl;
      count = 1;
      currentItem = item;
    }
  }
  std::cout << currentItem.isbn() << " : " << count << std::endl;
  return 0;
}
