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


int main() {
    return 0;
}