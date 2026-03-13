#ifndef SHOP_ORDER_H
#define SHOP_ORDER_H
#include <string>


    class Order {
    private:
        int id;
        std::string name;
        double totalamount;
        std::string status;
        std::string paymentmethod;
    public:
        static int count;
        //Перевантаження конструктора
        Order(int id, std::string name, double total, std::string status, std::string payment);

        Order(int id, std::string name, double total, std::string status);

        Order(int id, std::string name, double total);

        Order(int id, std::string name);

        Order(int id);

        Order();

        Order(const Order &order);

        Order (Order &&order);

        void SetTotalAmount(double totalamount);

        double GetTotalAmount() const;

        static int GetCount();
        ~Order();

        void display() const;
    };



#endif //SHOP_ORDER_H