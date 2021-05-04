/*
    Read three values (variables A, B and C), which are the three student's grades. Then, calculate the average, considering that grade A has weight 2, grade B has weight 3 and the grade C has weight 5. Consider that each grade can go from 0 to 10.0, always with one decimal place.

    Input
    The input file contains 3 values of floating points with one digit after the decimal point.

    Output
    Print the message "MEDIA"(average in Portuguese) and the student's average according to the following example, with a blank space before and after the equal signal.
*/

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