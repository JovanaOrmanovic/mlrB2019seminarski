#include "../tgen.hpp"

int rand_seed = 0;
int test_count = 10;
string naziv_zadatka = "masa_i_tezina";

void gen_test(int i, ostream &tin) {
  double masa = random_value(1.0, 500.0);
  tin << fixed << setprecision(2) << masa << endl;
}
