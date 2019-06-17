#include "../tgen.hpp"

int rand_seed = 0;
int test_count = 10;
string naziv_zadatka = "mafini";

void gen_test(int i, ostream &tin) {
  int t = random_value(1, 60);
  int s = random_value(1, 40);
  tin << t << "\n" << s << endl;
}
