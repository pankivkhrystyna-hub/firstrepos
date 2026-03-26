#include "Item.h"
#include <iostream>

Item::Item() : id(0), name("Unknown"), price(0) {
}

Item::Item(int id, std::string name, int price)
    : id(id), name(name), price(price) {
}

void Item::StaticMethodBinding() const {
     std::cout << "Static Binding in Item"<<std::endl;
}

Item &Item::operator=(const Item &rhs) {
    if (this != &rhs) {
        this->id = rhs.id;
        this->name = rhs.name;
        this->price = rhs.price;
    }
    return *this;
}

void Item::display() const {
    std::cout<<"From class Item"<<std::endl;
    std::cout << "id: " << id << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Price: " << price << std::endl;
}

double Item::getPrice() const {
    return price;
}
Item::~Item() {
}