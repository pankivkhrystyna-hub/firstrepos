#include "Electronics.h"
#include <iostream>
using namespace std;

void Electronics::print1() const {
    std::cout << "Замовлення номер: " << id << std::endl;
    std::cout << "Клієнт: " << name << std::endl;
    std::cout << "Сума до сплати: " << price << " грн." << std::endl;
    std::cout << "Опис: " << description << std::endl;
    std::cout << "Категорія: " << category << std::endl;
    std::cout << "Бренд: " << brand << std::endl;
    std::cout << "Місяці гарантії: " << warrantyMonths << std::endl;
}

Electronics::Electronics(std::string name,int price, std::string description, std::string category, std::string brand, int warrantyMonths)
      : Product(name, price, description, category),brand(brand), warrantyMonths(warrantyMonths) {};

Electronics::Electronics() : Product("", 0, "","") ,brand("") ,warrantyMonths(0) {};

Electronics::~Electronics() {};
void Electronics::display() {
       Product::display();
    std::cout<<"Brand: "<<brand<<std::endl<< "WarrantyMonths: "<<warrantyMonths<<std::endl;
};