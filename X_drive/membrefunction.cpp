#include <iostream>
using namespace std;

class MathOperations {
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Function to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Function to add two floating-point numbers
    float add(float a, float b) {
        return a + b;
    }
};

int main() {
    MathOperations math;

    cout << "Sum of 2 integers (10, 20): " << math.add(10, 20) << endl;
    cout << "Sum of 3 integers (5, 10, 15): " << math.add(5, 10, 15) << endl;
    cout << "Sum of 2 floats (2.5, 3.5): " << math.add(2.5f, 3.5f) << endl;

    return 0;
}
