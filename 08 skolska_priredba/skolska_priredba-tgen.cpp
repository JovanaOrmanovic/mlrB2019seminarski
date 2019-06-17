#include "../tgen.hpp"

int rand_seed = 0;
int test_count = 10;
string naziv_zadatka = "skolska_priredba";

void gen_test(int i, ostream &tin) {
  int n = random_value(1, 35);
  int s = random_value(3 * n, 4 * n);
  tin << n << "\n" << s << endl;
}
