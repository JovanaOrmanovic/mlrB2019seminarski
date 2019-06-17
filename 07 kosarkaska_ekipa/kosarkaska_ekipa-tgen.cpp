#include "../tgen.hpp"

int rand_seed = 0;
int test_count = 10;
string naziv_zadatka = "kosarkaska_ekipa";

void gen_test(int i, ostream &tin) {
  int n = random_value(1, 20);
  vector<int> igraci = random_array(n, 1, 5);
  tin << n << endl;
  print_array<int>(igraci, tin, true);
}
