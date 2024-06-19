// 8. Inventory Management System:
//     - Create a class 'Product' with attributes such as 'productId', 'productName', 'quantity', and 'price'. Implement methods to add and remove products from inventory, update product details, and display product information.

#include<iostream>
using namespace std;

class Product {
private:
    int product_id;
    int quantity;
    string name;
    double price;

protected:
    void setProductId(int id) {
        product_id = id;
    }

    // void setQuantity
};