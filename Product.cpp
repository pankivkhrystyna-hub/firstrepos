#include "Product.h"
#include <iostream>

Product::Product(std::string name, int price ,std::string description, std::string category)
  : name(name), price(price), description(description), category(category) {}

Product::Product(std::string name, int price ,std::string description)
  : Product(name, price, description, std::string("")){}

Product::Product(std::string name, int price)
  : Product(name, price, std::string(""), std::string("")){}

Product::Product(std::string name)
  : Product(name, (0), std::string(""), std::string("")){}

Product::~Product() {}

void Product::display() {std::cout << "\nProduct: " << std::endl;
  std::cout << name << std::endl;
  std::cout << price << std::endl;
  std::cout << description << std::endl;
  std::cout << category << std::endl;
}