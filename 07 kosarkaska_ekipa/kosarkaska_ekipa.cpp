#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    // brojac1 broji igrace pozicije 1, brojac2 broji igrace pozicije 2 itd.
    int brojac1 = 0, brojac2 = 0, brojac3 = 0, brojac4 = 0, brojac5 = 0;
    for (int i = 1; i <= n; i++)
    {
        int pozicija;
        cin >> pozicija;
        switch (pozicija)
        {
        case 1:
            brojac1++;
            break;
        case 2:
            brojac2++;
            break;
        case 3:
            brojac3++;
            break;
        case 4:
            brojac4++;
            break;
        case 5:
            brojac5++;
            break;
        }
    }

    cout << "1 : " << brojac1 << endl;
    cout << "2 : " << brojac2 << endl;
    cout << "3 : " << brojac3 << endl;
    cout << "4 : " << brojac4 << endl;
    cout << "5 : " << brojac5 << endl;

    return 0;
}