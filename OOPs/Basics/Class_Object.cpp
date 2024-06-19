#include<iostream>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    float marks;

    void setStudentDetails() {
        cout << "\nEnter rollNo: ";
        cin >> rollNo;

        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter marks: ";
        cin >> marks;
    }

    void getStudentDetails() {
        cout << "\nRollNo: " << rollNo << "\nName: " << name << "\nMarks: " << marks;
    }
};

int main() {
    Student obj;

    obj.setStudentDetails();
    obj.getStudentDetails();

    return 0;
}