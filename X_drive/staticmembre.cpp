#include <iostream>
using namespace std;

class Student {
private:
    static int count;   // Static data member to keep track of total students
    string name;

public:
    // Constructor
    Student(string n) {
        name = n;
        count++;   // Increment count whenever a new object is created
    }

    // Static member function
    static void showCount() {
        cout << "Total number of students: " << count << endl;
    }

    void display() {
        cout << "Student name: " << name << endl;
    }
};

// Define and initialize static data member outside the class
int Student::count = 0;

int main() {
    Student s1("Alice");
    Student s2("Bob");

    s1.display();
    s2.display();

    // Call static member function (no object needed)
    Student::showCount();

    return 0;
}
