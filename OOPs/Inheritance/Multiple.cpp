#include<iostream>
using namespace std;

class Father {
    string name;
    double property;

public:
    Father(string name, double property) {
        this->name = name;
        this->property = property;
    }

protected:
    void displayFatherDetails() {
        cout << "Name: " << name << endl;
        cout << "Property: " << property << endl;
    }
};

class Mother {
    string name;
    bool love;

public:
    Mother(string name, bool love) {
        this->name = name;
        this->love = love;
    }

protected:
    void displayMotherDetails() {
        cout << "Name: " << name << endl;
        cout << "Mother's Love: " << (love ? "True" : "False") << endl;
    }
};

class Child : public Father, public Mother {
    string name;
public:
    Child(string name, string fatherName, string motherName, double property, bool love) : Father(fatherName, property), Mother(motherName, love) {
        this->name = name;
    }

    void displayChildDetails() {
        cout << "Name: " << name << endl;
        displayFatherDetails();
        displayMotherDetails();
    }
};

int main() {
    Child c("Rudra", "Vipulbhai", "Bhavikaben", 45000, true);

    c.displayChildDetails();

    return 0;
}