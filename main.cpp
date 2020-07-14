#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

int main() {
    Employee john{"John", "Doe", 5000};
    Employee jane{"Jane", "Doe", 2000};

    cout << "\n\nEmployee Name: " << john.getFirstName() << " " << john.getLastName();
    cout << "\nAnnual Salary: " << john.getAnnualSalary();

    cout << "\n\nEmployee Name: " << jane.getFirstName() << " " << jane.getLastName();
    cout << "\nAnnual Salary: " << jane.getAnnualSalary();

    int raisedSalary = john.getAnnualRaiseSalary(10);
    cout << "\n\n" << john.getFirstName() << " " << john.getLastName() << " raised salary == " << raisedSalary;

    raisedSalary = jane.getAnnualRaiseSalary(10);
    cout << "\n\n" << jane.getFirstName() << " " << jane.getLastName() << " raised salary == " << raisedSalary;
}
