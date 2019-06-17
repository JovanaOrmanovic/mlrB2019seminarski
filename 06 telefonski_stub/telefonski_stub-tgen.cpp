#include "../tgen.hpp"

int rand_seed = 0;
int test_count = 10;
string naziv_zadatka = "telefonski_stub";

void gen_test(int i, ostream &tin) {
  double h = random_value(3.0, 30.0);
  double a = random_value(1.0, h);
  tin << fixed << setprecision(3) << h << "\n" << a << endl;
}
