/*
    In this problem, the task is to read a code of a product 1, the number of units of product 1, the price for one unit of product 1, the code of a product 2, the number of units of product 2 and the price for one unit of product 2. After this, calculate and show the amount to be paid.

    Input
    The input file contains two lines of data. In each line there will be 3 values: two integers and a floating value with 2 digits after the decimal point.

    Output
    The output file must be a message like the following example where "Valor a pagar" means Value to Pay. Remember the space after ":" and after "R$" symbol. The value must be presented with 2 digits after the point.
*/

#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int prod1Code, prod1Units;
    double prod1Price;
    int prod2Code, prod2Units;
    double prod2Price;
    double totalValue;

    cin >> prod1Code >> prod1Units >> prod1Price;
    cin >> prod2Code >> prod2Units >> prod2Price;

    totalValue = (prod1Units * prod1Price) + (prod2Units * prod2Price);

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << totalValue << endl;
 
    return 0;
}