#include "Electronics.h"

#include <iostream>
using namespace std;
Electronics::Electronics(std::string name,int price, std::string description, std::string category, std::string brand, int warrantyMonths)
      : Product(name, price, description, category),brand(brand), warrantyMonths(warrantyMonths) {};

Electronics::Electronics() : Product("", 0, "","") ,brand("") ,warrantyMonths(0) {};

Electronics::~Electronics() {};
void Electronics::display() {
       Product::display();
    std::cout<<"Brand: "<<brand<<std::endl<< "WarrantyMonths: "<<warrantyMonths<<std::endl;
};