/*
Constructor: A special methods which invokes(called) automatically when the object of the class is created.

3 types of constructors:
    -> Default Constructor / Non-Parameterized Constructors (no arguments will be given)
    -> Parameterized Constructor (arguments will be given)
    -> Copy Constructor (To copy/create the whole new object from another object)

Rules to define a constructor:
    -> Constructor should have the same name as the class
    -> No return type should be given to a constructors

CPP will give a default constructor to a class when the class won't have any. 
*/

#include<iostream>
using namespace std;

class Product {
private:
    int id, quantity;
    string name;
    double price;

public:
    //Default Constructor
    Product() {
        id = 0;
        quantity = 0;
        name = "";
        price = 0;
    }

    //Parameterized Constructor
    Product(int id, string n, int q, double p) {
        this->id = id;
        name = n;
        quantity = q;
        price = p;
    }

    void display() {
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Product watch;
    Product watch1(123, "Titan smart-watch", 1000, 1500);

    watch.display();
    watch1.display();

    return 0;
}