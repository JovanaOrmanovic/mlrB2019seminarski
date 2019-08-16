#include "../tgen.hpp"

int rand_seed = 0;
int test_count = 10;
string naziv_zadatka = "rodjendani";

void gen_test(int i, ostream &tin)
{
    int n = random_value(1, 12);

    tin << n << endl;
    for (int i = 0; i < n; ++i)
    {
        string dan, mesec, godina;
        mesec = to_string(random_value(1, 12));
        if (mesec != "2")
            dan = to_string(random_value(1, 31));
        else
            dan = to_string(random_value(1, 29));
        godina = to_string(random_value(1990, 2002));

        if (dan.length() == 1)
            dan = "0" + dan;
        if (mesec.length() == 1)
            mesec = "0" + mesec;

        tin << dan << "." << mesec << "." << godina << "." << endl;
    }
}
