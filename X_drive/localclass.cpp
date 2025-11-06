#include <iostream>
using namespace std;

void demoFunction() {
    static int count = 10;  
    int num = 5;           

    class Local {
    public:
        void display() {
            cout << "This is a local class inside a function." << endl;
            
            cout << "Static variable count = " << count << endl;
         
            
        }
    };

    Local obj;
    obj.display();
}

int main() {
    demoFunction();

  
    return 0;
}
