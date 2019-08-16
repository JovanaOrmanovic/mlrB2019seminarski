#include "../tgen.hpp"

int rand_seed = 0;
int test_count = 10;
string naziv_zadatka = "medijana_i_moda";

void gen_test(int i, ostream &tin)
{
    int n = random_value(5, 50);
    vector<int> a = random_array(n, 1, 5);

    tin << n << endl;
    print_array(a, tin, true);
}
