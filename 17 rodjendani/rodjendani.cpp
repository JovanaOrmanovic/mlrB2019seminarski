#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

struct datum
{
    int dan;
    int mesec;
    int godina;
};

// probaj da uradis ovo u c# isto kao sto sam ja napisao,
// znaci gde ti je 1 stavi false, gde je -1 stavi true

bool cmp(datum d1, datum d2)
{
    if (d1.godina > d2.godina)
        return false;
    else if (d1.godina < d2.godina)
        return true;
    else
    {
        if (d1.mesec > d2.mesec)
            return false;
        else if (d1.mesec < d2.mesec)
            return true;
        else
        {
            if (d1.dan > d2.dan)
                return false;
            else if (d1.dan < d2.dan)
                return true;
            else
                return 0;
        }
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    datum nizDatuma[n];
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        // stoi() funkcija iz biblioteke string, pretvara string u int
        nizDatuma[i].dan = stoi(s.substr(0, 2));
        nizDatuma[i].mesec = stoi(s.substr(3, 2));
        nizDatuma[i].godina = stoi(s.substr(6, 4));
    }

    sort(nizDatuma, nizDatuma + n, cmp);

    for (int i = 0; i < n; i++)
        cout << nizDatuma[i].dan << "." << nizDatuma[i].mesec << "."
             << nizDatuma[i].godina << "." << endl;

    return 0;
}
