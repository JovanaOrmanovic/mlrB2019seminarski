#include "../tgen.hpp"
#include <iomanip>

int rand_seed = 0;
int test_count = 10;
string naziv_zadatka = "merenje_povrsine";

void gen_test(int i, ostream &tin) {
  double porvrsina = random_value(10.0, 333.0);
  int izbor = random_value(1, 3);

  tin << fixed << setprecision(2) << porvrsina << "\n" << izbor << endl;
}
