#include "Product.h"
#include "Item.h"
#include <iostream>

Product::Product(std::string name, int price ,std::string description, std::string category)
  : Item(id, name,price), description(description), category(category) {}

Product::Product(std::string name, int price ,std::string description)
  : Item(id, name,price), description(description), category("") {}

Product::Product(std::string name, int price)
  : Item(id, name,price), description(""), category("") {}

Product::Product(std::string name)
  : Item(id, name,0), description(""), category("") {}

Product::Product() {}

Product::Product(const Product &other)
: Item(other.id, other.name, other.price), description(other.description),category (other.category) {
  std::cout << "Copy constructor was called" << std::endl;
}

Product  Product::operator+() const{
  return Product(name,price+price, description, category);
}

Product  Product::operator+(const Product &other) const {
  std::string NewName = this->name + " " + other.name;
  int NewPrice = this->price + other.price;
  std::string NewDescription = this->description + " " + other.description;
  std::string NewCategory = this->category + " " + other.category;

  return Product(NewName, NewPrice, NewDescription, NewCategory);
}

std::ostream& operator<<(std::ostream& os, const Product &other) {
  os << "\nProduct name: " <<other.name << "\nProduct price: "
  << other.price << "\nProduct descriprion: "<<other.description
  <<"\nProduct category: "<< other.category;
  return os;
}

std::istream& operator>>(std::istream& is, Product &other) {
  std::cout << "\nProduct name: ";
  is>>other.name;
  std::cout <<std::endl<< "Product price: ";
  is>>other.price;
  std::cout << "\nProduct description: ";
  is>>other.description;
  std::cout << "\nProduct category: ";
  is>>other.category;
  return is;
}

void Product::StaticMethodBinding() const {
  std::cout << "Static Binding in Product"<<std::endl;
}

std::string Product::getName() const {
  return name;
}

Product::~Product() {}

void Product::display() const  {
std::cout << "\nProduct: " << std::endl;
  Item::display();
  std::cout<<"From class Product"<<std::endl;
  std::cout <<"Descriotion: " <<description << std::endl;
  std::cout << "Category: "<<category << std::endl;
}