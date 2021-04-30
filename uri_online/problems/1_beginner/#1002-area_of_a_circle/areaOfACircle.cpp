#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    const double pi = 3.14159;
    
    double A, R;

    cin >> R;

    A = pi * (R * R);

    cout << fixed;
    cout << setprecision(4);
    cout << "A=" << A << endl;
 
    return 0;
}