#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  double h, a;
  cin >> h >> a;
  // b predstavlja visinu na kojoj se stub prelomio
  double b = 0.5 * (h - (a * a) / h);
  cout << fixed << setprecision(3) << b << endl;
  return 0;
}