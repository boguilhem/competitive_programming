#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {

    const double weight_A = 2;
    const double weight_B = 3;
    const double weight_C = 5;
 
    double A, B, C, MEDIA;

    cin >> A >> B >> C;

    MEDIA = ((A * weight_A) + (B * weight_B) + (C * weight_C)) / (weight_A + weight_B + weight_C);

    cout << fixed;
    cout << setprecision(1);
    cout << "MEDIA = " << MEDIA << endl;
 
    return 0;
}