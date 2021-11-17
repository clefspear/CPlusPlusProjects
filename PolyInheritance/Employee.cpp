#include "Employee.h"

int Employee::getID() {
    return employeeID;
}
char Employee::getType() {
    return employeeType;
}
int Employee::getSalary() {
    return salary;
}
float Employee::getShare() {
    return profitShare;
}
std::string Employee::getName() {
    return name;
}
float Employee::calculateSalary(int modifier){ return salary; }

