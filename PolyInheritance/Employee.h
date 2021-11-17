#include <iostream>
#include <string>

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
class Employee {
protected:
    //Every employee will have an
    //ID, Type, Salary, profit share, and name.
    int employeeID;
    char employeeType;
    int salary;
    float profitShare;
    std::string name;
public:
    //These will allow us to get the
    //variables of the employee
    int getID();
    char getType();
    int getSalary();
    float getShare();
    std::string getName();
    
    //This is the virtual function to calculate
    //salary. Every employee type has a different way of
    //calculating salary.
    float calculateSalary(int modifier);
}; //End Employee
#endif

