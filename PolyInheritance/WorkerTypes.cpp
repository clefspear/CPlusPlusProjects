#include "Employee.h"
#include <iostream>
#include <string>

class Owner : public Employee {
public:
    Owner(std::string newName) {
        employeeType = 'O';
        salary = 15000;
        profitShare = .60;
        employeeID = 1;
        name = newName;
    }
    
    float calculateSalary(int modifier) {
        return salary+(modifier*profitShare);;
    }
}; //End Owner

class Chef : public Employee {
private:
    std::string specialty;
public:
    Chef(std::string newName, std::string newSpecialty, int id) {
        employeeType = 'C';
        salary = 10000;
        profitShare = .20;
        employeeID = id;
        name = newName;
        specialty = newSpecialty;
    }
    
    float calculateSalary(int modifier) {
        return salary+(modifier*profitShare);
    }
    std::string getSpecialty() {
        return specialty;
    }
}; //End Chef

class Waiter : public Employee {
private:
    int yearsWorked;
public:
    Waiter(std::string newName, int years, int id) {
        employeeType = 'W';
        salary = 3000;
        profitShare = 0;
        employeeID = id;
        name = newName;
        yearsWorked = years;
    }
    
    int getYearsWorked() {
        return yearsWorked;
    }
    float calculateSalary(int modifier) {
        return salary + modifier;
    }
}; //End Waiter
