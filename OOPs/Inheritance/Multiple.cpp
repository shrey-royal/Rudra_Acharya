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

/*
1. Employee Hierarchy:
   Create classes 'Person' (with name and age) and 'Employee' (with salary and department). Derive a class 'Manager' from 'Person' and 'Employee', adding a 'bonus' attribute.

2. Shape Hierarchy:
   Design classes 'Shape' (with area calculation) and 'Color' (with color attributes). Create a 'ColoredShape' class that inherits both 'Shape' and 'Color'.

3. Animal Classification:
   Define classes 'Animal' (with species and habitat) and 'Pet' (with owner and trained status). Derive a 'DomesticAnimal' class from 'Animal' and 'Pet', adding a 'vaccinationStatus' attribute.

4. Vehicle Details:
   Implement classes 'Vehicle' (with manufacturer and year) and 'Engine' (with horsepower and fuel type). Create a 'Car' class inheriting both 'Vehicle' and 'Engine', adding a 'numSeats' attribute.

5. Library Management:
   Define classes 'Item' (with title and ISBN) and 'Borrowable' (with borrower and due date). Derive a 'Book' class from 'Item' and 'Borrowable', adding a 'genre' attribute.

6. Bank Account:
   Create classes 'Account' (with account number and balance) and 'Transaction' (with transaction ID and date). Derive a 'SavingsAccount' class from 'Account' and 'Transaction', adding an 'interestRate' attribute.

7. Electronic Devices:
   Design classes 'Device' (with model and manufacturer) and 'Feature' (with specifications). Create a 'Smartphone' class inheriting both 'Device' and 'Feature', adding an 'OS' attribute.

8. Student Records:
   Implement classes 'Person' (with name and address) and 'Student' (with roll number and grade). Derive a 'CollegeStudent' class from 'Person' and 'Student', adding a 'major' attribute.

9. Game Characters:
   Define classes 'Character' (with name and health) and 'Weapon' (with damage and type). Create a 'Warrior' class inheriting both 'Character' and 'Weapon', adding an 'armor' attribute.

10. Restaurant Management:
    Create classes 'Dish' (with name and price) and 'Recipe' (with ingredients). Derive a 'SpecialDish' class from 'Dish' and 'Recipe', adding a 'chefSpecialty' attribute.
*/