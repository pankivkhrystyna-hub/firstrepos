#include "Product.h"
#include <iostream>

Product::Product(std::string name, int price ,std::string description, std::string category)
  : name(name), price(price), description(description), category(category) {}

Product::~Product() {}

void Product::display() {std::cout << "\nProduct: " << std::endl;
  std::cout << name << std::endl;
  std::cout << price << std::endl;
  std::cout << description << std::endl;
  std::cout << category << std::endl;
}