#include <iostream>
#include <string>

struct Sales_data {
  std::string bookNo;
  unsigned units_sold{0};
  double revenue{0.0};
};

int main() {
  Sales_data book1, book2;
  double price = 0.0;
  std::cin >> book1.bookNo >> book1.units_sold >> price;
  book1.revenue = book1.units_sold * price;
  std::cin >> book2.bookNo >> book2.units_sold >> price;
  book2.revenue = book2.units_sold * price;
  if (book1.bookNo == book2.bookNo) {
    double totalRevenue = book1.revenue + book2.revenue;
    unsigned int totalCnt = book1.units_sold + book2.units_sold;
    std::cout << book1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
    if (totalCnt != 0) {
      std::cout << totalRevenue / totalCnt << std::endl;
    } else {
      std::cout << "(no sales)" << std::endl;
    }
    return 0;
  } else {
    std::cerr << "Data must refer to the same ISBN" << std::endl;
    return -1;
  }
}
