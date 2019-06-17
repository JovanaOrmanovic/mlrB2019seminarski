#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int t, s;
  cin >> t >> s;
  int ukupanBrMafina = (17 - 8) * 6;
  if (ukupanBrMafina >= t + s)
    cout << "DA" << endl;
  else
    cout << "NE" << endl;

  return 0;
}