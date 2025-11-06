#include <iostream>
using namespace std;

class Demo {
private:
    int number;

public:
    // Constructor
    Demo(int n) {
        number = n;
        cout << "Constructor called! Number = " << number << endl;
    }

    // Member function
    void display() {
        cout << "Displaying number: " << number << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called for number = " << number << endl;
    }
};

int main() {
    cout << "Creating first object..." << endl;
    Demo obj1(10);

    cout << "\nCreating second object..." << endl;
    Demo obj2(20);

    cout << "\nUsing objects..." << endl;
    obj1.display();
    obj2.display();

    cout << "\nEnd of main function..." << endl;
    return 0;
}
