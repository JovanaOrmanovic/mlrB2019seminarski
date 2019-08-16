#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

using namespace std;

bool sortirajPoDrugom(const pair<string, int> &a, const pair<string, int> &b)
{
    return (a.second < b.second);
}

int main(int argc, char const *argv[])
{
    string linija;
    string agencija;
    int cena;
    vector<pair<string, int>> ponude;

    while (cin>>linija)
    {
        agencija = linija.substr(0, linija.find(" "));
        cena = stoi(linija.substr(linija.find(" ") + 1));
        ponude.push_back(make_pair(agencija, cena));
    }

    sort(ponude.begin(), ponude.end(), sortirajPoDrugom);

    for (auto ponuda : ponude)
    {
        cout << ponuda.first << endl;
    }

    return 0;
}