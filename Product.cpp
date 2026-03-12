#include "Product.h"
#include <iostream>

Product::Product(std::string name, int price ,std::string description, std::string category)
  : name(name), price(price), description(description), category(category) {}

Product::Product(std::string name, int price ,std::string description)
  : name(name), price(price), description(description), category("") {}

Product::Product(std::string name, int price)
  : name(name), price(price), description(""), category("") {}

Product::Product(std::string name)
  : name(name), price(0), description(""), category("") {}

Product::Product() {}

Product::Product(const Product &other)
: name{other.name}, price{other.price}, description(other.description),category (other.category) {
  std::cout << "Copy constructor was called" << std::endl;
}

Product::~Product() {}

void Product::display() {std::cout << "\nProduct: " << std::endl;
  std::cout << name << std::endl;
  std::cout << price << std::endl;
  std::cout << description << std::endl;
  std::cout << category << std::endl;
}