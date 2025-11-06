#include <iostream>
using namespace std;

// Inline function definition
inline int subtract(int a, int b) {
    return a - b;
}

int main() {
    int x = 10, y = 4;

    cout << "Result of subtraction: " << subtract(x, y) << endl;
}