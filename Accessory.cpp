#include "Accessory.h"
#include <string>
#include <iostream>

Accessory::Accessory (const std::string &name, int price, const std::string &description, const std::string &category,
     const std::string &brand, int warrantyMonths)
     : Electronics(name, price, description, category, brand, warrantyMonths) {
}

Accessory::Accessory(): Electronics("", 0, "", "", "",  0) {

}

Accessory::~Accessory() {
}

void Accessory::display() {
     Product::display();
     std::cout<<"Brand: "<<brand<<std::endl;
};