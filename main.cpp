#include <iostream>

#include "Accessory.h"
#include "Customer.h"
#include "Electronics.h"
#include "Product.h"
#include "Order.h"
using namespace std;

int main() {
    Order order1(1232,"Order 1", 16700, "Processing", "Card"); //
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
    const Order order4(4,"Order number 4", 12654, "Processing", "Card"); //
    order4.display();
    cout<<"\nOrder 3 before SetAmount:"<<endl;
    order3.display();
    order3.SetTotalAmount(345);
   cout<<"\nOrder 3 after SetTotalAmount: "<<order3.GetTotalAmount()<<endl;

    cout<<"\nCount of orders: "<<Order::GetCount()<<endl;

    cout<<"\nUnary operator"<<endl;
    Product product5= +product1;
    product5.display();

    cout<<"\nBinary operator"<<endl;
    Product Product3=product1+product2;
    Product3.display();

    cout<<"\nStream insertion"<<endl;
    Product product4;
    cin>>product4;
    cout<<"\nStream extraction"<<endl;
    cout<<"\nProduct:"<<product4<<endl;

    cout<<"\nElectronics: "<<endl;
    Electronics electronics1("Iphoneee", 1234,"Beautiful", "electronic", "Apple", 12 );
    electronics1.display();
    Accessory accessory1;
    accessory1.display();

    cout<<"Let's try create an order with object product:"<<endl;
    Order orderr(123,"Order with Product", 123000, "Processing", "Card",product4);
    orderr.display();

    cout<<"\nПроблема статичної прив’язки методів"<<endl;
    Item* ptr=new Product("laptop",12300,"2222","laptops");
    ptr->StaticMethodBinding();
   cout<<"Після Override: "<<endl;
    ptr->display();

    cout<<"\nПоліморфізм через посилання"<<endl;
    Product product6("",0);
    Item &iRef=product6;
    iRef.display();

    cout<<"\nЧисто віртуальна функція"<<endl;
    //Item item();
    cout<<ptr->getName()<<endl;

    cout<<"\nінтерфейс "<<endl;
    product1.print1();
    cout<<endl;
    order1.print1();
    cout<<endl;
    Accessory accessory2("apple");
    accessory2.print1();

    return 0;
}