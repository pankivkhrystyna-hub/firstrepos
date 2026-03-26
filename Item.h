#ifndef SHOP_ITEM_H
#define SHOP_ITEM_H
#include <string>


class Item {
protected:
    int id;
    std::string name;
    int price;
public:
    Item();
    Item(int id, std::string name, int price);
    Item &operator=(const Item &rhs);
    virtual void display() const;
    virtual ~Item();
};


#endif //SHOP_ITEM_H