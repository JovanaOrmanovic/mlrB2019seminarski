#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  double n;
  cin >> n;
  int m;
  cin >> m;
  int brojac = 0;
  for (int i = 0; i < m; i++) {
    double cenaProizvoda;
    cin >> cenaProizvoda;
    if (cenaProizvoda <= n)
      brojac++;
  }
  cout << brojac << endl;

  return 0;
}