#include "../tgen.hpp"

int rand_seed = 0;
int test_count = 10;
string naziv_zadatka = "drustvene_mreze";

void gen_test(int i, ostream &tin) {
  int n = random_value(1, 100);
  vector<int> niz = random_array(n, 1, 3);
  tin << n << endl;
  print_array<int>(niz, tin, true);
}
