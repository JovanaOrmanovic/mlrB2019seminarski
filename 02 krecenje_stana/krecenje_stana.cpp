#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    double P, x, y;
    cin >> P >> x >> y;
    double ukupnoPotrebnoL = P * x;
    if (ukupnoPotrebnoL <= y)
        cout << "DA" << endl;
    else
        cout << "NE" << endl;
    return 0;
}