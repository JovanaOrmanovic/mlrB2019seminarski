#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    double masa, tezina;
    cin >> masa;
    tezina = masa * 9.81;
    cout << fixed << setprecision(2) << tezina << endl;
    return 0;
}