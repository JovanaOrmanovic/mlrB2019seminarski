#include "../tgen.hpp"

int rand_seed = 0;
int test_count = 10;
string naziv_zadatka = "spisak_ucenika";

void gen_test(int i, ostream &tin) {

  int n = random_value(1, 100);

  vector<string> matematika(n);
  for (int i = 0; i < n; i++) {
    matematika[i] = random_string_upper(2) + random_string_digits(2);
  }

  int m = random_value(1, 100);

  vector<string> informatika(m);
  for (int i = 0; i < m; i++) {
    informatika[i] = random_string_upper(2) + random_string_digits(2);
  }

  tin << n << endl;
  for (auto x : matematika) {
    tin << x << endl;
  }

  tin << m << endl;
  for (auto x : informatika) {
    tin << x << endl;
  }
}
