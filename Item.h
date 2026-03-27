#ifndef SHOP_ITEM_H
#define SHOP_ITEM_H
#include <string>

//StaticMethodBinding,Abstract Class with two virtual functions, operator =, virtual destructor
class Item {
protected:
    int id;
    std::string name;
    int price;
public:
    Item();
    Item(int id, std::string name, int price);

    void StaticMethodBinding() const;
    Item &operator=(const Item &rhs);
    virtual void display() const;
    virtual double getPrice() const;
    virtual std::string getName() const=0; //virtual function
    virtual ~Item();
};


#endif //SHOP_ITEM_H