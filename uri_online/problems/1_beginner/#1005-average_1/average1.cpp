#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {

    const double weight_A = 3.5;
    const double weight_B = 7.5;
 
    double A, B, MEDIA;

    cin >> A >> B;

    MEDIA = ((A * weight_A) + (B * weight_B)) / (weight_A + weight_B);

    cout << fixed;
    cout << setprecision(5);
    cout << "MEDIA = " << MEDIA << endl;
 
    return 0;
}