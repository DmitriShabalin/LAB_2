#include <iostream>
#define  _USE_MATH_DEFINES
#include <math.h>

using namespace std;
int main() {
    double E = 6, Eo = 0.0885;
    double l = 13, C;
    double r = 4.5;
    double R[9] = { 4.7, 4.8, 4.9, 5, 6, 7, 8, 9, 10 };
    for (size_t i = 0; i < size(R); i++)
    {
        C = 2 * M_PI * E * Eo * l / log((R[i]) / r);
        cout << "R = " << R[i] << "   " << "C = " << C << endl;
    }
}