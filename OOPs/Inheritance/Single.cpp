#include<iostream>
#include<iomanip>
using namespace std;

class Father {
public:
    string name;
    double property;

    Father(string name, double property) {
        this->name = name;
        this->property = property;
        cout << "This is Father!" << endl;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Property: " << fixed << setprecision(0) << property << endl;
    }
};

class Child : public Father {
public:

    Child(string name, double property) : Father(name, property) {
        cout << "This is Child!" << endl;
    }
};

int main() {
    Child rudra("Vipulbhai", 3700000);
    
    rudra.displayDetails();

    return 0;
}

/*
Problem Statement 1: Employee and Manager Classes
Create a base class 'Employee' with attributes for 'name' and 'salary'. Create a derived class 'Manager' that adds an attribute for 'department'. Implement a function to display the details of an employee and override it in the 'Manager' class to include the department details.

Problem Statement 2: Book and EBook Classes
Create a base class 'Book' with attributes for 'title' and 'author'. Create a derived class 'EBook' that adds an attribute for 'fileSize'. Implement a function to display the details of a book and override it in the 'EBook' class to include the file size.

Problem Statement 3: Vehicle and Car Classes
Create a base class 'Vehicle' with attributes for 'brand' and 'model'. Create a derived class 'Car' that adds an attribute for 'fuelType'. Implement a function to display the details of a vehicle and override it in the 'Car' class to include the fuel type.

Problem Statement 4: Animal and Dog Classes
Create a base class 'Animal' with attributes for 'species' and 'age'. Create a derived class 'Dog' that adds an attribute for 'breed'. Implement a function to display the details of an animal and override it in the 'Dog' class to include the breed.

Problem Statement 5: Appliance and WashingMachine Classes
Create a base class 'Appliance' with attributes for 'brand' and 'power'. Create a derived class 'WashingMachine' that adds an attribute for 'loadCapacity'. Implement a function to display the details of an appliance and override it in the 'WashingMachine' class to include the load capacity.

*/