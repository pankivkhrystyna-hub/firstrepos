#ifndef SHOP_ELECTRONICS_H
#define SHOP_ELECTRONICS_H
#include <string>
#include "Product.h"


class Electronics : public Product {
private:
    std::string brand;
    int warrantyMonths;
public:
    void print1() const override;
    Electronics();
    Electronics(std::string name,int price, std::string description, std::string category, std::string brand, int warrantyMonths);
    ~Electronics();
    void display();
};


#endif //SHOP_ELECTRONICS_H