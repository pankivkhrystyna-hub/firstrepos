#include <iostream>
using namespace std;

class Order {
private:
    int id;
    string name;
    double totalamount;
    string status;
    string paymentmethod;
public:
    //Перевантаження конструктора
    Order(int id, string name, double total, string status, string payment) : id(id), name(name), totalamount(total), status(status), paymentmethod(payment) {}

    Order(){}

    Order (int i) {
        id = i;
        name = "";
        totalamount = 0;
        status = "";
        paymentmethod = "";
    }

    void print() {
        cout << "order:"<<endl<<
            "id: " << id << endl
        << "name: " << name << endl
        << "totalamout: " << totalamount<<endl
        <<"status: " << status << endl
        <<"payment method: " << paymentmethod <<endl;
    }

    ~Order() {} //деструктор
};

class Customer {
private:
    string name;
    string email;
    string phone;
public:
    Customer(string n, string e, string p) {
        name = n;
        email = e;
        phone = p;
    }
    //Customer(string n, string e) : Customer(n, e, "") {}//коструктор делегування
    Customer(string n) : Customer(n, "andrey@email" , "+3805674567") {} //коструктор делегування
    //Customer() : Customer("", "","") {}
    void print() {
        cout << endl<<"Customer"<<endl<<
            "name: " << name<< endl
        << "email: " << email << endl
        << "phone: " << phone<<endl;
    }
    ~Customer() {}
};

class Product {
private:
    int price;
    string name;
    string description;
    string category;
public:
    Product(int pric = 16700, string namee= "iPhone", string describ= "Beautiful :)", string categ= "Phone") : price(pric),name(namee), description(describ), category(categ) {} //миттєве ініціалізування
    // Product(int pric=16700, string namee= "Iphone", string describ = "Beautifil :)", string categ = "Mobile") : price(pric),name(namee), description(describ), category(categ) {} //миттєва ініціалізація і присвоєння значень

    void print() {
        cout <<endl<<"Product:" <<endl
        << "price: " << price << endl
        << "name: " << name << endl
        << "desciption: " << description<<endl
        <<"category: " << category << endl;
    }
    ~Product(){}
};

int main() {
    return 0;
}