#include "Sales_data.h"
#include <iostream>
#include <string>

int main() {
  Sales_data book;
  double price = 0;
  while (std::cin >> book.bookNo >> book.units_sold >> price) {
    book.revenue = book.units_sold * price;
    std::cout << book.bookNo << " " << book.units_sold << " " << book.revenue
              << " " << price << std::endl;
  }
  return 0;
}
