#include <iostream>
#include "Customer.h"
#include "Product.h"
#include "Order.h"
using namespace std;

int main() {
    Order order1(1232,"Order Iphone", 16700, "Processing", "Card"); //
    order1.display();
    Customer customer1("Andrey", "andrey@email.com", "+3800954636");
    customer1.display();
    Product product1("iPhone", 78000, "Beautiful :)", "Card");
    product1.display();
    Product product2=product1;
    cout<<"\nProduct copy:";
    product2.display();
    Order order2=order1;
    order2.display();
    Order order3=move(order2);
    order3.display();
    cout<<"\nOrder 2 after moving:"<<endl;
    order2.display();
    const Order order4(123121,"Order number 4", 12654, "Processing", "Card"); //
    order4.display();
    order3.display();
    order3.SetTotalAmount(345);
   cout<<"\nOrder 3 after SetTotalAmount: "<<order3.GetTotalAmount()<<endl;

    cout<<"Count of orders: "<<Order::GetCount()<<endl;

    Product Product3=product1+product2;
    Product3.display();

    Product product4;
    cin>>product4;
    cout<<"\nProduct:"<<product4<<endl;
    return 0;
}