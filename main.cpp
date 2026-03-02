#include <iostream>
#include "Customer.h"
#include "Product.h"
#include "Order.h"
using namespace std;

int main() {
    Order order1(1232,"Order Iphone", 16700, "Processing", "Card");
    order1.display();
    Customer customer1("Andrey", "andrey@email.com", "+3800954636");
    customer1.display();
    Product product1;
    product1.display();

    return 0;
}