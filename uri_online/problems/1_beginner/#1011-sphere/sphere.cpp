/*
    Make a program that calculates and shows the volume of a sphere being provided the value of its radius (R) . The formula to calculate the volume is: (4/3) * pi * R3. Consider (assign) for pi the value 3.14159.

    Input
    The input contains a value of floating point (double precision).

    Output
    The output must be a message "VOLUME" like the following example with a space before and after the equal signal. The value must be presented with 3 digits after the decimal point.
*/

#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main() {

    const double PI = 3.14159;
    double R, volume;

    cin >> R;

    volume = (4.0/3.0) * PI * pow(R, 3);
 
    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;
 
    return 0;
}