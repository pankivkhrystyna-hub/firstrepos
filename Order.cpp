#include "Order.h"
#include <iostream>

void Order::print1() const {
    std::cout << "Замовлення номер: " << this->id << std::endl;
    std::cout << "Клієнт: " << name << std::endl;
    std::cout << "Сума до сплати: " << totalamount << " грн." << std::endl;
}

int Order::count=0;

Order::Order(int id, std::string name, double totalamount, std::string status, std::string paymentmethod, Product product)
  : id(id), name(name) , totalamount(totalamount), status(status), paymentmethod(paymentmethod) , product(product){
    count++;
}

Order::Order(int id, std::string name, double totalamount, std::string status, std::string paymentmethod)
  : id(id), name(name) , totalamount(totalamount), status(status), paymentmethod(paymentmethod) , product(Product()){
    count++;
}

Order::Order(int id, std::string name, double totalamount, std::string status)
    :Order(id, name, totalamount, status, "Unknown"){}

Order::Order(int id, std::string name, double totalamount)
    :Order(id, name, totalamount, "Unknown", "Unknown"){}

Order::Order(int id, std::string name)
    :Order(id, name,0 , "Unknown", "Unknown"){}

Order::Order(int id)
   :Order(id, "Unknown",0 , "Unknown", "Unknown"){}

Order::Order()
    :Order(0, "", 0.0, "", ""){}

Order::Order( const Order &order) :
id(order.id), name(order.name), totalamount(order.totalamount),
status(order.status), paymentmethod(order.paymentmethod),
product(order.product){
    std::cout << "\nCopy constructor was called " << std::endl;
}

Order::Order(Order&& other) :
id(other.id), name(other.name), totalamount(other.totalamount), status(other.status), paymentmethod(other.paymentmethod), product(other.product) {
    std::cout << "\nMove constructor was called " << std::endl;
    std::cout<<"\nNew order with moved data: "<<std::endl;
    other.id = 0;
    other.name = "";
    other.totalamount = 0;
    other.status= "";
    other.paymentmethod = "";
    other.product = Product();
}

void Order::SetTotalAmount(double totalamount) {
    this->totalamount = totalamount;
}

double Order::GetTotalAmount() const {

    return this->totalamount;
}

int Order::GetCount() {
    return count;
}

Order::~Order() {
    std::cout << "\nData was released" << std::endl;
}

void Order::display() const {
    std::cout <<std::endl<< "order:"<<std::endl<<"id: "
    << id << std::endl<<"name: " << name <<
        std::endl<< "totalamount: " << totalamount
    <<std::endl<<"status: " << status << std::endl<<
        "payment method: " << paymentmethod <<std::endl;
    product.display();
}