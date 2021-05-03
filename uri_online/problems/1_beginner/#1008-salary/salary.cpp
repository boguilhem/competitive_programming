#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int employeeNumber;
    int monthWorkHours;
    float payPerHour;
    float employeeSalary;

    cin >> employeeNumber >> monthWorkHours >> payPerHour;

    employeeSalary = monthWorkHours * payPerHour;

    cout << "NUMBER = " << employeeNumber << endl;
    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " << employeeSalary << endl;
 
    return 0;
}