#ifndef SHOP_CUSTOMER_H
#define SHOP_CUSTOMER_H
#include <string>


class Customer {
    private:
        std::string name;
        std::string email;
        std::string phone;
    public:
    Customer(std::string name, std::string email, std::string phone);

    Customer(std::string name, std::string email);

    Customer(std::string name);

    Customer();

    void display();

    ~Customer()
    };


#endif //SHOP_CUSTOMER_H