#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v = 0) : value(v) {}

    // Overload unary minus (-)
    Number operator-() const {
        return Number(-value);
    }

    // Overload prefix increment (++x)
    Number operator++() {
        ++value;
        return *this;
    }

    // Overload postfix increment (x++)
    Number operator++(int) {
        Number temp = *this;
        value++;
        return temp;
    }

    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number n1(5);
    cout << "Original: ";
    n1.display();

    Number n2 = -n1;  // Calls overloaded unary minus
    cout << "After applying - operator: ";
    n2.display();

    ++n1;  // Calls prefix ++
    cout << "After prefix ++: ";
    n1.display();

    n1++;  // Calls postfix ++
    cout << "After postfix ++: ";
    n1.display();

    return 0;
}
