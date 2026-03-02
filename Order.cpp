#include "Order.h"
#include <iostream>

Order::Order(int id, std::string name, double totalamount, std::string status, std::string paymentmethod)
  : id(id), name(name) , totalamount(totalamount), status(status), paymentmethod(paymentmethod) {
    std::cout << "order:"<<std::endl;
    std::cout <<"id: "<< id << std::endl;
    std::cout <<"name: " << name << std::endl;
    std::cout << "totalamout: " << totalamount <<std::endl;
    std::cout <<"status: " << status << std::endl;
    std::cout <<"payment method: " << paymentmethod <<std::endl;
}

Order::Order(int id)
    :Order(id, std::string(""), 0.0, std::string(""), std::string("")){};

Order::~Order() {
    std::cout << "order:"<<std::endl;
}

void Order::display() {
    std::cout << "order:"<<std::endl<<"id: "<< id << std::endl<<"name: " << name << std::endl<< "totalamout: " << totalamount <<std::endl<<"status: " << status << std::endl<<"payment method: " << paymentmethod <<std::endl;
}