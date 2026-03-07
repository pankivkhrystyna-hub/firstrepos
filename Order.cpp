#include "Order.h"
#include <iostream>

Order::Order(int id, std::string name, double totalamount, std::string status, std::string paymentmethod)
  : id(id), name(name) , totalamount(totalamount), status(status), paymentmethod(paymentmethod) {}

Order::Order(int id, std::string name, double totalamount, std::string status)
    :Order(id, name, totalamount, status, std::string("Uknown")){}

Order::Order(int id, std::string name, double totalamount)
    :Order(id, name, totalamount, std::string ("Unknown"), std::string("Unknown")){}

Order::Order(int id, std::string name)
    :Order(id, name,0 , std::string ("Unknown"), std::string("Unknown")){}

Order::Order(int id)
    :Order(id, std::string("Unknown"),0 , std::string ("Unknown"), std::string("Unknown")){}

Order::Order()
    :Order(0, std::string(""), 0.0, std::string(""), std::string("")){}

Order::~Order() {}

void Order::display() {
    std::cout << "order:"<<std::endl<<"id: "<< id << std::endl<<"name: " << name << std::endl<< "totalamout: " << totalamount <<std::endl<<"status: " << status << std::endl<<"payment method: " << paymentmethod <<std::endl;
}