#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int broj;
  cin >> broj;
  int ukupanZbirDelioca = 1;
  for (int i = 2; i <= broj / 2; i++) {
    if (broj % i == 0)
      ukupanZbirDelioca += i;
  }
  if (ukupanZbirDelioca == broj)
    cout << "DA" << endl;
  else
    cout << "NE" << endl;

  return 0;
}