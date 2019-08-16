#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    double povrsina;
    int indikator;
    cin >> povrsina;
    cin >> indikator;
    double novaPovrsina;
    if (indikator == 1)
        novaPovrsina = povrsina * 100;
    else if (indikator == 2)
        novaPovrsina = povrsina * 10000;
    else
        novaPovrsina = povrsina * 1000000;

    cout << fixed << setprecision(2) << novaPovrsina << endl;

    return 0;
}
