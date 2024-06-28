//  "Create a 'Logger' class to maintain a log of system events. Use a static member function 'logEvent(string message)' to add entries to the log without creating an instance of the class. The log should be accessible and shared across all instances of the 'Logger' class."

#include<iostream>
using namespace std;

class Logger {
public:
    static void logEvent(string message) {
        cout << message << endl;
    }
};

int main() {
    
    Logger::logEvent("hello, this is a log!");

    return 0;
}