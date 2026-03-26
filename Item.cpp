#include "Item.h"
#include <iostream>

Item::Item() : id(0), name("Unknown"), price(0) {
}

Item::Item(int id, std::string name, int price)
    : id(id), name(name), price(price) {
}

void Item::display() const {
    std::cout << "id: " << id << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Price: " << price << std::endl;
}

Item::~Item() {
}