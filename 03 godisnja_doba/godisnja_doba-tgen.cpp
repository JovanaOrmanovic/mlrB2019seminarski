#include "../tgen.hpp"

int rand_seed = 0;
int test_count = 10;
string naziv_zadatka = "godisnja_doba";

void gen_test(int i, ostream &tin)
{
    int dan = random_value(1, 31);
    int mesec = random_value(1, 12);
    tin << dan << " " << mesec << endl;
}
