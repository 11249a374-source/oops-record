#include <iostream>
using namespace std;

class Box {
private:
    double width;

public:
    Box(double w) : width(w) {}

    // Declare friend function
    friend void showWidth(Box b);
};

// Friend function definition
void showWidth(Box b) {
    cout << "Width of box: " << b.width << endl;
}

int main() {
    Box box1(5.5);
    showWidth(box1); // Can access private member width
    return 0;
}
