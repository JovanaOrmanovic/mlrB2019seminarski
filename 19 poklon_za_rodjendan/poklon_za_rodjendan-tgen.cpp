#include "../tgen.hpp"
#include <iomanip>

int rand_seed = 0;
int test_count = 10;
string naziv_zadatka = "poklon_za_rodjendan";

void gen_test(int i, ostream &tin)
{
    double novac = random_value(100.0, 35000.0);
    int br_artikala = random_value(1, 55);

    tin << fixed << setprecision(2) << novac << endl;
    tin << br_artikala << endl;
    for (int i = 0; i < br_artikala; ++i)
    {
        double n = random_value(1000.0, 9999.99);

        tin << fixed << setprecision(2) << n << endl;
    }
}
