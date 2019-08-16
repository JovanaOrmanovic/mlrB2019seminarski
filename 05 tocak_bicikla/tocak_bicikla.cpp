#include <iomanip>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    double r;
    int p;
    cin >> r >> p;
    double obim = 2 * r * M_PI;
    double ukupanPut = p * obim;
    // centimetre pretvaramo u metre
    ukupanPut = ukupanPut * 0.01;
    cout << fixed << setprecision(2) << ukupanPut << endl;
    return 0;
}