#include <iostream>
#include "Accessory.h"
#include "Customer.h"
#include "Electronics.h"
#include "Product.h"
#include "Order.h"
#include <fstream>
#include <vector>
#include <memory>
using namespace std;


bool AdminPassword() {
    string password;
    cout<<"Enter your password: ";
    cin>>password;
    return (password == "admin");
}
int main() {

    vector<shared_ptr<Item>> catalog;

    int Choice=-1;

    while (Choice != 0) {
        cout<<"\n Головне меню "<<endl;
        cout<<"1. Увійти як адміністратор"<<endl;
        cout<<"2. Увійти як користувач"<<endl;
        cout<<"0. Вихід"<<endl;
        cout<<"Ваш вибір: "<<endl;
        cin>>Choice;

        switch (Choice) {
    case 1: {
        if (AdminPassword()) {
            int AdminChoice=-1;
            while (AdminChoice != 0) {
                cout<<"\n    Меню Адміністратора "<<endl;
                cout<<"1. Додати новий товар (Product)"<<endl;
                cout<<"2. Переглянути весь склад"<<endl;
                cout<<"0. Повернутися назад"<<endl;
                cout<<"Вибір: ";
                cin>>AdminChoice;
                switch (AdminChoice) {
                    case 1: {
                        string name;
                        int price;
                        cout<<"Назва товару: ";
                        cin>>name;
                        cout<<"Ціна: ";
                        cin>>price;

                        catalog.push_back(make_shared<Product>(name, price));
                        cout<<"Товар додано до каталогу!"<<endl;
                        break;
                    }
                    case 2: {
                        cout<<"\nCписок товарів на складі:"<<endl;
                        if (catalog.empty()) {
                            cout<<"Склад порожній!"<<endl;
                        } else {
                            for (const auto& item:catalog) {
                                item->display();
                            }
                        }
                        break;
                    }
                    case 0: {
                        cout<<"Повернення в головне меню"<<endl;
                        break;
                    }
                    default: {
                        cout <<"Невірний пункт меню!"<<endl;
                        break;
                    }
                }
            }
        }
        else {
            cout <<"Невірний пароль!"<<endl;
        }
        break;
    }

        case 2: {
        int userChoice = -1;
        while (userChoice != 0) {
            cout << "\n--- МЕНЮ КОРИСТУВАЧА ---" << endl;
            cout << "1. Переглянути каталог (що заповнив адмін)" << endl;
            cout << "2. Запустити старі тести (Лаба 5)" << endl;
            cout << "0. Назад" << endl;
            cout << "Вибір: ";
            cin >> userChoice;

            if (userChoice == 1) {
                if (catalog.empty()) cout << "Каталог поки порожній." << endl;
                for (const auto& item : catalog) item->display();
            }
            else if (userChoice == 2) {
            }
        }
        }
                break;
}
    }

   //  Order order1(1232,"Order 1", 16700, "Processing", "Card"); //
   //  order1.display();
   //  Customer customer1("Andrey", "andrey@email.com", "+3800954636");
   //  customer1.display();
   //  Product product1("iPhone", 78000, "Beautiful :)", "Card");
   //  product1.display();
   //  Product product2=product1;
   //  cout<<"\nProduct copy:";
   //  product2.display();
   //  Order order2=order1;
   //  order2.display();
   //  Order order3=move(order2);
   //  order3.display();
   //  cout<<"\nOrder 2 after moving:"<<endl;
   //  order2.display();
   //  const Order order4(4,"Order number 4", 12654, "Processing", "Card"); //
   //  order4.display();
   //  cout<<"\nOrder 3 before SetAmount:"<<endl;
   //  order3.display();
   //  order3.SetTotalAmount(345);
   // cout<<"\nOrder 3 after SetTotalAmount: "<<order3.GetTotalAmount()<<endl;
   //
   //  cout<<"\nCount of orders: "<<Order::GetCount()<<endl;
   //
   //  cout<<"\nUnary operator"<<endl;
   //  Product product5= +product1;
   //  product5.display();
   //
   //  cout<<"\nBinary operator"<<endl;
   //  Product Product3=product1+product2;
   //  Product3.display();
   //
   //  cout<<"\nStream insertion"<<endl;
   //  Product product4;
   //  cin>>product4;
   //  cout<<"\nStream extraction"<<endl;
   //  cout<<"\nProduct:"<<product4<<endl;
   //
   //  cout<<"\nElectronics: "<<endl;
   //  Electronics electronics1("Iphoneee", 1234,"Beautiful", "electronic", "Apple", 12 );
   //  electronics1.display();
   //  Accessory accessory1;
   //  accessory1.display();
   //
   //
   //  cout<<"\nLaba 5:"<<endl;
   //  cout<<"Let's try create an order with object product:"<<endl;
   //  Order orderr(123,"Order with Product", 123000, "Processing", "Card",product4);
   //  orderr.display();
   //
   //  cout<<"\nПроблема статичної прив’язки методів"<<endl;
   //  Item* ptr=new Product("laptop",12300,"2222","laptops");
   //  ptr->StaticMethodBinding();
   // cout<<"Після Override: "<<endl;
   //  ptr->display();
   //
   //  cout<<"\n6. Поліморфізм через посилання"<<endl;
   //  Product product6("",0);
   //  Item &iRef=product6;
   //  iRef.display();
   //
   //  cout<<"\nЧисто віртуальна функція"<<endl;
   //  //Item item();
   //  cout<<ptr->getName()<<endl;
   //
   //
   //
   //  cout<<"\nінтерфейс "<<endl;
   //  product1.print1();
   //  cout<<endl;
   //  order1.print1();
   //  cout<<endl;
   //  Accessory accessory2("apple");
   //  accessory2.print1();

    return 0;
}