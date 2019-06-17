#include "../tgen.hpp"

int rand_seed = 0;
int test_count = 10;
string naziv_zadatka = "tocak_bicikla";

void gen_test(int i, ostream &tin) {
  double r = random_value(5.0, 25.0);
  int p = random_value(1, 1000);
  tin << fixed << setprecision(2) << r << "\n" << p << endl;
}
