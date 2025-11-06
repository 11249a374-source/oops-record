#include <iostream> 
#include <string>  

class Student {
private:
    std::string name;
    int rollNumber;
    double marks;

public:
    
    void getInformation() {
        std::cout << "Enter student name: ";
        std::getline(std::cin >> std::ws, name); 
        std::cout << "Enter roll number: ";
        std::cin >> rollNumber;
        std::cout << "Enter marks: ";
        std::cin >> marks;
    }
    void displayInformation() {
        std::cout << "\n--- Student Information ---" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks: " << marks << std::endl;
    }
};

int main() {
    
    Student student1;
    student1.getInformation();
    student1.displayInformation();
    return 0; 
}