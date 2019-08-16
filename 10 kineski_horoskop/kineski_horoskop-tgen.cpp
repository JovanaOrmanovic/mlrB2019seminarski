#include "../tgen.hpp"

int rand_seed = 0;
int test_count = 10;
string naziv_zadatka = "kineski_horoskop";

void gen_test(int i, ostream &tin)
{
    int godina = random_value(1900, 2100);
    tin << godina << endl;
}
