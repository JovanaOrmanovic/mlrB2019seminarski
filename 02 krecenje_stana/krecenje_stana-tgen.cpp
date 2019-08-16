#include "../tgen.hpp"

int rand_seed = 0;
int test_count = 10;
string naziv_zadatka = "krecenje_stana";

void gen_test(int i, ostream &tin)
{
    double P = random_value(1.0, 150.0);
    double x = random_value(0.1, 0.9);
    double y = random_value(1, 130);
    tin << fixed << setprecision(2) << P << "\n" << x << "\n" << y << endl;
}
