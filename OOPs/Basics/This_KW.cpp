#include<iostream>
using namespace std;

class FoodItem {
private:
    int id;
    string name;
    double price;

public:
    FoodItem(int id, string name, double price) {
        this->id = id;
        this->name = name;
        this->price = price;
    }

    void display() {
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    FoodItem item(121, "Dhokla", 30);

    item.display();

    return 0;
}

/*
1. Problem Statement 1: Modify FoodItem Details
   - Write a method `updateDetails` in the `FoodItem` class that updates the `name` and `price` using the `this` pointer.

2. Problem Statement 2: Compare FoodItem Prices
   - Implement a method `isCheaperThan` in the `FoodItem` class that takes another `FoodItem` object and returns `true` if the current object's price is less than the other object's price using the `this` pointer.

3. Problem Statement 3: Copy Constructor
   - Add a copy constructor to the `FoodItem` class that initializes a new `FoodItem` object using another `FoodItem` object, utilizing the `this` pointer.

4. Problem Statement 4: Method Chaining
   - Implement setter methods `setId`, `setName`, and `setPrice` in the `FoodItem` class that allow method chaining using the `this` pointer.

5. Problem Statement 5: Overload Assignment Operator
   - Overload the assignment operator in the `FoodItem` class to correctly assign values from one `FoodItem` object to another using the `this` pointer.

6. Problem Statement 6: Discounted Price
   - Add a method `applyDiscount` that takes a discount percentage, applies it to the price, and returns the discounted price. Ensure the method uses the `this` pointer.

7. Problem Statement 7: Print Details Conditionally
   - Implement a method `printIfCheaperThan` that takes a price and prints the details of the `FoodItem` only if its price is less than the given price, using the `this` pointer.

8. Problem Statement 8: Self-comparison
   - Add a method `isSameItem` that compares the `id` of the current object with another `FoodItem` object to check if they are the same item, using the `this` pointer.

9. Problem Statement 9: Increment Price
   - Write a method `incrementPrice` that increments the price of the `FoodItem` by a given amount using the `this` pointer.

10. Problem Statement 10: Validate Price
    - Add a method `isPriceValid` that returns `true` if the price is positive and `false` otherwise, using the `this` pointer.



*/