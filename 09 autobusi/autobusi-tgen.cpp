#include "../tgen.hpp"

int rand_seed = 0;
int test_count = 10;
string naziv_zadatka = "autobusi";

void gen_test(int i, ostream &tin) {
  double t = random_value(0.1, 3.0);
  double s = random_value(100.0, 550.0);
  double v1 = random_value(30.0, 70.0);
  if (s / v1 > t)
    t += 0.7;
  tin << fixed << setprecision(2) << t << "\n" << s << "\n" << v1 << endl;
}
