#include <iostream>
using namespace std;

// Function with one integer parameter
void display(int a) {
    cout << "Display with integer: " << a << endl;
}

// Function with one double parameter
void display(double a) {
    cout << "Display with double: " << a << endl;
}

// Function with two parameters
void display(int a, int b) {
    cout << "Display with two integers: " << a << " and " << b << endl;
}

int main() {
    display(10);        // Calls display(int)
    display(5.5);       // Calls display(double)
    display(3, 7);      // Calls display(int, int)

    return 0;
}
