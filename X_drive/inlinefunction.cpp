#include <iostream>
using namespace std;

// Inline function definition
inline int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 10, y = 20;
    
    cout << "Sum of " << x << " and " << y << " is: " << add(x, y) << endl;
    cout << "Sum of 5 and 15 is: " << add(5, 15) << endl;
    
    return 0;
}
