#include "../tgen.hpp"

int rand_seed = 0;
int test_count = 10;
string naziv_zadatka = "savrsen_broj";

void gen_test(int i, ostream &tin)
{
    int broj = random_value(1, 65000);

    tin << broj << endl;

    return;
}
