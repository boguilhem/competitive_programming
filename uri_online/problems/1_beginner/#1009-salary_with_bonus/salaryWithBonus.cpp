#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    char sellerName[50];
    double sellerSalary;
    double totalSales;
    double sellerTotalSalary;
    
    cin.get(sellerName, 100);
    cin >> sellerSalary >> totalSales;

    sellerTotalSalary = sellerSalary + (totalSales * 0.15);

    cout << "TOTAL = R$ " << fixed << setprecision(2) << sellerTotalSalary << endl;
    
    return 0;
}