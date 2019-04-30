#include <iostream>
#include <string>

struct Sales_data {
  std::string bookNo;
  unsigned units_sold{0};
  double revenue{0.0};
};

int main() {
  Sales_data book, totalValue;
  double price = 0.0;
  std::cin >> book.bookNo >> book.units_sold >> price;
  book.revenue = book.units_sold * price;
  totalValue = book;
  while (std::cin >> book.bookNo >> book.units_sold >> price) {
    if (book.bookNo != totalValue.bookNo) {
      std::cerr << "Data must refer to the same ISBN" << std::endl;
      break;
    } else {
      totalValue.units_sold += book.units_sold;
      totalValue.revenue += book.units_sold * price;
    }
  }
  std::cout << totalValue.bookNo << " " << totalValue.units_sold << " "
            << totalValue.revenue << " ";
  if (totalValue.units_sold != 0) {
    std::cout << totalValue.revenue / totalValue.units_sold << std::endl;
  } else {
    std::cout << "(no sales)" << std::endl;
  }
}
