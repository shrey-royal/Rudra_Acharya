/*
> Write a program in C++ to find a prime number within a range.
Input number for starting range: 1
Input number for ending range: 100
The prime numbers between 1 and 100 are:
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
The total number of prime numbers between 1 to 100 is: 25
*/

#include<iostream>
using namespace std;

int main() {
    int i, j, start, end, flag;

    cout << "\nEnter start and end: ";
    cin >> start >> end;

    cout << "The prime numbers between " << start << " and " << end << " are: ";

    for(i=start; i <= end; i++) {
        if(i <= 1) continue;

        flag = 1;
        for(j=2; j <= i/2; j++) {
            if(i % j == 0) {
                flag = 0;
                break;
            }
        }
    
        if(flag) {
            cout << i << ", ";
        }
    }


    return 0;
}