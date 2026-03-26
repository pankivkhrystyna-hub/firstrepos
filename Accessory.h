#ifndef SHOP_ACCESSORY_H
#define SHOP_ACCESSORY_H
#include "Electronics.h"


class Accessory :public Electronics{
private:
 std::string brand;
public:
    Accessory(const std::string &name, int price, const std::string &description, const std::string &category,
     const std::string &brand, int warrantyMonths);

    Accessory();

    ~Accessory();

  void display();
};


#endif //SHOP_ACCESSORY_H