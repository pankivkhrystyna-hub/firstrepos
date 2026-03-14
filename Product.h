#ifndef SHOP_PRODUCT_H
#define SHOP_PRODUCT_H
#include <string>

class Product {
private:
    std::string name;
    int price;
    std::string description;
    std::string category;
    public:
    Product( std::string name, int price, std::string description, std::string category);

    Product( std::string name, int price, std::string description);

    Product( std::string name, int price);

    Product( std::string name);

    Product ();

    Product (const Product &other);

    Product operator+(const Product &other) const;

    friend std::ostream& operator<<(std::ostream& os, const Product &other);

    friend std::istream& operator>>(std::istream& os, Product &other);

   ~Product();

    void display();

};


#endif //SHOP_PRODUCT_H