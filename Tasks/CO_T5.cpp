#include <iostream>
using namespace std;

class student {
private:
    string collegeName, studentName, branch;
    int semester;
    float cgpa;

public:
    student() {
        collegeName = studentName = branch = "";
        semester = 0;
        cgpa = 0.0;
    }

    void scanData() {
        cout << "Enter College Name: ";
        getline(cin, collegeName);
        
        cout << "Enter Student Name: ";
        getline(cin, studentName);
        
        cout << "Enter branch: ";
        getline(cin, branch);
        
        cout << "Enter Semester: ";
        cin >> semester;

        cout << "Enter CGPA: ";
        cin >> cgpa;
        cin.ignore();
    }
    
    void display() {
       cout << collegeName << "\t\t" << studentName << "\t\t" << branch << "\t\t" << semester << "\t" << cgpa << endl;
    }
};

int main() {
    student s[3];
    
    cout << "Scanning Student Data: " << endl;
    for (int i = 0; i < 3; i++) {
        s[i].scanData();
    }
    
    cout << "College Name\t\tStudent Name\t\tBranch\t\tSemester\tCGPA" << endl;
    for (int i = 0; i < 3; i++) {
        s[i].display();
    }
    

    return 0;
}