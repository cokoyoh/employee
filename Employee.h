#include <string>

using namespace std;

class Employee {
public:
    Employee(string firstName, string lastName, int monthlySalary) {
        this->firstName = firstName;
        this->lastName = lastName;
        setMonthlySalary(monthlySalary);
    }

    void setMonthlySalary(int monthlySalary) {
        if(monthlySalary < 0) {
            this->monthlySalary = 0;
        }

        this->monthlySalary = monthlySalary;
    }

    int getMonthlySalary() {
        return monthlySalary;
    }

    void setFirstName(string firstName) {
        this->firstName = firstName;
    }

    string getFirstName() {
        return firstName;
    }

    void setLastName(string lastName) {
        this->lastName = lastName;
    }

    string getLastName() {
        return lastName;
    }

    int getAnnualSalary() {
        return getMonthlySalary() * 12;
    }

    int getAnnualRaiseSalary(int percentageRaise) {
       return getAnnualSalary() + (getAnnualSalary() * percentageRaise/100);
    }

private:
    string firstName;
    string lastName;
    int monthlySalary;
};