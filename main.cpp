#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

int main() {
    Employee john{"John", "Doe", 5000};
    Employee jane{"Jane", "Doe", 2000};

    john.display();
    jane.display();

    cout << "\nRaise employee salary by 10%\n";
    john.displayRaises();
    jane.displayRaises();
}
