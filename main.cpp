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

int main() {
    return 0;
}