#ifndef SHOP_PRODUCT_H
#define SHOP_PRODUCT_H
#include <string>

class Product {
private:
    std::string name;
    int price;
    std::string description;
    std::string category;
    public:

    Product( std::string name= "iPhone", int pric = 16700, std::string describ= "Beautiful :)", std::string category= "Phone");

   ~Product();

    void display();

};


#endif //SHOP_PRODUCT_H