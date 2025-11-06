#include <iostream>
#include <iomanip> // Required for std::fixed and std::setprecision

class Employee {
private:
    std::string employeeName;
    double basicPay;
    double da;
    double hra;
    double grossSalary;
    double tax;
    double netSalary;

public:
    // Function to get employee details and basic pay from the user
    void getDetails() {
        std::cout << "Enter Employee Name: ";
        std::getline(std::cin >> std::ws, employeeName); // Use std::ws to consume leading whitespace
        std::cout << "Enter Basic Pay: ";
        std::cin >> basicPay;
    }

    // Function to calculate payslip components
    void calculatePayslip() {
        da = basicPay * 0.70; // 70% of basic pay
        hra = basicPay * 0.10; // 10% of basic pay
        grossSalary = basicPay + da + hra;
        tax = grossSalary * 0.20; // 20% of gross salary
        netSalary = grossSalary - tax;
    }

    // Function to display the payslip
    void displayPayslip() {
        std::cout << "\n===== EMPLOYEE PAYSLIP =====" << std::endl;
        std::cout << "Employee Name: " << employeeName << std::endl;
        std::cout << std::fixed << std::setprecision(2); // Format output to 2 decimal places
        std::cout << "Basic Pay:     " << basicPay << std::endl;
        std::cout << "DA (70%):      " << da << std::endl;
        std::cout << "HRA (10%):     " << hra << std::endl;
        std::cout << "Gross Salary:  " << grossSalary << std::endl;
        std::cout << "Tax (20%):     " << tax << std::endl;
        std::cout << "Net Salary:    " << netSalary << std::endl;
        std::cout << "============================" << std::endl;
    }
};

int main() {
    Employee emp; // Create an object of the Employee class
    emp.getDetails(); // Get employee details and basic pay
    emp.calculatePayslip(); // Calculate payslip components
    emp.displayPayslip(); // Display the generated payslip

    return 0;
}