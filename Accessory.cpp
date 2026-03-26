#include "Accessory.h"
#include <string>
#include <iostream>

Accessory::Accessory (const std::string &name, int price, const std::string &description, const std::string &category,
     const std::string &brand, int warrantyMonths)
     : Product(name, price, description, category), brand(brand) {
}

Accessory::Accessory(): Product("", 0, "", ""), brand("") {

}

Accessory::~Accessory() {
}

void Accessory::display() {
     Product::display();
     std::cout<<"Brand: "<<brand<<std::endl;
};