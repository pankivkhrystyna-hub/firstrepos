#include "Customer.h"
#include <iostream>
#include <ostream>

Customer::Customer(std::string name, std::string email, std::string phone)
   : name(name), email(email), phone(phone) {
}

Customer::Customer(std::string name, std::string email )
   : Customer(name, email, std::string(""))    {
}

Customer::Customer(std::string name )
   : Customer(name, std::string(""), std::string(""))    {
}

void Customer::display() {
   std::cout << "\nCustomer: " << std::endl;
   std::cout << name << std::endl;
   std::cout << email << std::endl;
   std::cout << phone << std::endl;
}

