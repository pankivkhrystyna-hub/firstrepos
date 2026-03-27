#ifndef SHOP_PRODUCT_H
#define SHOP_PRODUCT_H
#include <string>
#include "Item.h"
#include "Printable.h"

class Product :public Item, public Printable {
protected:
    std::string description;
    std::string category;
    public:
    void print1() const override;
    Product( std::string name, int price, std::string description, std::string category);
    Product( std::string name, int price, std::string description);
    Product( std::string name, int price);
    Product( std::string name);
    Product ();

    Product (const Product &other);

    Product operator+() const;

    Product operator+(const Product &other) const;

    friend std::ostream& operator<<(std::ostream& os, const Product &other);

    friend std::istream& operator>>(std::istream& os, Product &other);

    void StaticMethodBinding() const;

    virtual std::string getName() const override;

    ~Product();

    void display() const override;

};


#endif //SHOP_PRODUCT_H