#ifndef SHOP_CUSTOMER_H
#define SHOP_CUSTOMER_H
#include <string>
//#include "Accessory.h"


class Customer// : public Accessory
{
    private:
        std::string name;
        std::string email;
        std::string phone;
    public:
    Customer(std::string name = "Unknown", std::string email = "Unknown", std::string phone= "Unknown");

    void display();

    ~Customer();
    };


#endif //SHOP_CUSTOMER_H