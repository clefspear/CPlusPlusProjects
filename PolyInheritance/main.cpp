#include "WorkerTypes.cpp"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    //=====EMPLOYEE INITIALIZATION=====
    Employee *employeeDatabase[6] = {
        new Owner("Peter"), new Chef("Christian", "Middle Eastern", 2), new Chef("Axl Rose", "Chinese", 3),
        new Waiter("Rachel", 3, 4), new Waiter("Batman", 2, 5), new Waiter("Kathy", 4, 6)
    };
    
    //=====EMPLOYEE LISTING=====
    cout << setw(25) << setfill('=') << "" << endl;
    cout << "Employee List" << endl;
    cout << setw(25) << setfill('=') << "" << endl;
    for(int i=0; i<6; i++) {
        cout << i+1 <<". " << employeeDatabase[i]->getName() << " - " << employeeDatabase[i]->getType() << endl;
        cout << "\t Salary: $" << employeeDatabase[i]->getSalary() << endl;
        if(employeeDatabase[i]->getType() == 'C')
            cout << "\t Specialty: " << ((Chef*)employeeDatabase[i])->getSpecialty() << endl;
        else if(employeeDatabase[i]->getType() == 'W')
            cout << "\t Years Worked: " << ((Waiter*)employeeDatabase[i])->getYearsWorked() << endl;
        cout << setw(15) << setfill('-') << "" << endl;
    }
    cout << setw(25) << setfill('=') << "" << endl;
    cout << endl;
    
    //=====END OF MONTH REPORT=====
    cout << setw(25) << setfill('=') << "" << endl;
    cout << "End of Month report" << endl;
    cout << setw(25) << setfill('=') << "" << endl;
    cout<< "Profits: $6000" << endl;
    cout << setw(15) << setfill('-') << "" << endl;
    
    //=====CHEFS AND OWNER=====
    for(int i=0; i<3; i++) {
        cout << i+1 <<". " << employeeDatabase[i]->getName() << " - " << employeeDatabase[i]->getType() << endl;
        cout << "\t Salary: $" << employeeDatabase[i]->getSalary() << endl;
        cout << "\t Profit Share: %" << employeeDatabase[i]->getShare()*100 << endl;
        cout << "\t Net Pay: $" << employeeDatabase[i]->calculateSalary(6000) << endl;
        cout << setw(15) << setfill('-') << "" << endl;
    }
    
    //=====WAITERS=====
    cout << "4. " << employeeDatabase[3]->getName() << " - " << employeeDatabase[3]->getType() << endl;
    cout << "\t Salary: $" << employeeDatabase[3]->getSalary() << endl;
    cout << "\t Tips earned: $1000" << endl;
    cout << "\t Net Pay: $" << employeeDatabase[3]->calculateSalary(1000) << endl;
    cout << setw(15) << setfill('-') << "" << endl;
    
    cout << "5. " << employeeDatabase[4]->getName() << " - " << employeeDatabase[4]->getType() << endl;
    cout << "\t Salary: $" << employeeDatabase[4]->getSalary() << endl;
    cout << "\t Tips earned: $1500" << endl;
    cout << "\t Net Pay: $" << employeeDatabase[4]->calculateSalary(1500) << endl;
    cout << setw(15) << setfill('-') << "" << endl;
    
    cout << "6. " << employeeDatabase[5]->getName() << " - " << employeeDatabase[5]->getType() << endl;
    cout << "\t Salary: $" << employeeDatabase[5]->getSalary() << endl;
    cout << "\t Tips earned: $1700" << endl;
    cout << "\t Net Pay: $" << employeeDatabase[5]->calculateSalary(1700) << endl;
    cout << setw(15) << setfill('-') << "" << endl;
    
    cout << setw(25) << setfill('=') << "" << endl;
    cout << endl;
}
