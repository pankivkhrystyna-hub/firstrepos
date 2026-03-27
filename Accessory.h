#ifndef SHOP_ACCESSORY_H
#define SHOP_ACCESSORY_H
#include "Product.h"

//is a, final,
class Accessory final :public Product{
private:
 std::string brand;
public:
    Accessory(const std::string &name, int price, const std::string &description, const std::string &category,
     const std::string &brand);

    Accessory(std::string brand);
    Accessory();

    ~Accessory();

  void display();
};


#endif //SHOP_ACCESSORY_H