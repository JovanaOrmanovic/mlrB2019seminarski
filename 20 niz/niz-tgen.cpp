#include "../tgen.hpp"

int rand_seed = 0;
int test_count = 10;
string naziv_zadatka = "niz";

void gen_test(int i, ostream &tin) {
  int n = random_value(2, 30);
  if (n % 2 != 0)
    n++;

  tin << n << endl;
  for (int i = 0; i < n; ++i) {
    int k = random_value(1, 22);
    tin << k << endl;
  }
}
