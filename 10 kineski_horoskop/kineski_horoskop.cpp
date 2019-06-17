#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int godina;
  cin >> godina;
  string znak;
  int ostatakSa12;
  ostatakSa12 = godina % 12;
  if (ostatakSa12 == 0)
    znak = "MAJMUN";
  else if (ostatakSa12 == 1)
    znak = "PETAO";
  else if (ostatakSa12 == 2)
    znak = "PAS";
  else if (ostatakSa12 == 3)
    znak = "SVINJA";
  else if (ostatakSa12 == 4)
    znak = "PACOV";
  else if (ostatakSa12 == 5)
    znak = "BIVO";
  else if (ostatakSa12 == 6)
    znak = "TIGAR";
  else if (ostatakSa12 == 7)
    znak = "ZEC";
  else if (ostatakSa12 == 8)
    znak = "ZMAJ";
  else if (ostatakSa12 == 9)
    znak = "ZMIJA";
  else if (ostatakSa12 == 10)
    znak = "KONJ";
  else
    znak = "KOZA";

  cout << znak << endl;
  return 0;
}