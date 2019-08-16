#include <algorithm>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int a[n] = {0};
    double medijana;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // sort je funkcija iz biblioteke algorithm koja sortira niz
    // (kao parametar navode se niz i njegov kraj, a moze se dodati i treci
    // parametar - nacin poredjenja)
    sort(a, a + n);

    if (n % 2 == 0)
        medijana = (a[n / 2] + a[n / 2 - 1]) / 2;
    else
        medijana = a[n / 2];
    // Napravimo niz b koji ce da cuva koliko se puta pojavila
    // koja ocena. b[i-1] ce sadrzati broj pojavljivvanja
    // ocene i. Kako ocena ima 5, toliko ima i elemenata naseg niza.
    int b[5] = {0};
    // svi elementi u nizu b se inicijalizuju na 0
    /*   for (int i = 0; i < 5; i++) {
        b[i] = 0;
      } */

    for (int i = 1; i < n; i++)
    {
        b[a[i] - 1]++;
    }
    // max_element je funkcija iz biblioteke algorithm koja vraca pokazivac na
    // najvecu vrednost u nizu prima iste parametre kao sort()
    // posto nama treba vrednost a ne pokazivac na tu vrednost u nizu,
    // mi je dereferenciramo i na taj nacin dobijamo vrendost najveceg elementa
    int najvisePojavljivanja = *max_element(b, b + 5);
    for (int i = 0; i < 5; i++)
    {
        if (najvisePojavljivanja == b[i])
            cout << i + 1 << " ";
    }
    cout << "\n" << medijana << endl;

    return 0;
}