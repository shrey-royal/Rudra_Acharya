#include<iostream>
using namespace std;

class Vehicle {
    string brand;
public:
    Vehicle(string brand) {
        this->brand = brand;
    }

    void displayBrand() {
        cout << "Brand: " << brand << endl;
    }
};

class Car : public Vehicle {
    int seats;
public:
    Car(string brand, int seats) : Vehicle(brand) {
        this->seats = seats;
    }

    void displaySeats() {
        cout << "Number of seats: " << seats << endl;
    }
};

class SUV : public Car {
private:
    bool offRoadCapability;
public:
    SUV(string brand, int seats, bool offRoadCapability) : Car(brand, seats) {
        this->offRoadCapability = offRoadCapability;
    }

    void displayOffRoadCapability() {
        cout << "Off-Road Capability: " << (offRoadCapability ? "Yes" : "No") << endl;
    }
};

int main() {
    SUV suv("Toyota Land Cruiser", 5, true);
    suv.displayBrand();
    suv.displaySeats();
    suv.displayOffRoadCapability();

    return 0;
}

/*
Tasks: 

Problem Statement 1: Person, Employee, and Manager Classes
Create a base class 'Person' with attributes for 'name' and 'age'. Derive a class 'Employee' from 'Person' that adds an attribute for 'employeeID'. Further derive a class 'Manager' from 'Employee' that adds an attribute for 'department'. Implement functions to display details at each level.

Problem Statement 2: Animal, Mammal, and Dog Classes
Create a base class 'Animal' with attributes for 'species' and 'age'. Derive a class 'Mammal' from 'Animal' that adds an attribute for 'furColor'. Further derive a class 'Dog' from 'Mammal' that adds an attribute for 'breed'. Implement functions to display details at each level.

Problem Statement 3: Vehicle, Car, and ElectricCar Classes
Create a base class 'Vehicle' with attributes for 'brand' and 'model'. Derive a class 'Car' from 'Vehicle' that adds an attribute for 'fuelType'. Further derive a class 'ElectricCar' from 'Car' that adds an attribute for 'batteryCapacity'. Implement functions to display details at each level.

Problem Statement 4: Appliance, WashingMachine, and SmartWashingMachine Classes
Create a base class 'Appliance' with attributes for 'brand' and 'power'. Derive a class 'WashingMachine' from 'Appliance' that adds an attribute for 'loadCapacity'. Further derive a class 'SmartWashingMachine' from 'WashingMachine' that adds an attribute for 'connectivity'. Implement functions to display details at each level.

Problem Statement 5: Publication, Book, and eBook Classes
Create a base class 'Publication' with attributes for 'title' and 'price'. Derive a class 'Book' from 'Publication' that adds an attribute for 'author'. Further derive a class 'eBook' from 'Book' that adds an attribute for 'fileSize'. Implement functions to display details at each level.

*/