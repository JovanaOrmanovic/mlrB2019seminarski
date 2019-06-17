#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
  int taksisti_vreme[100] = {0};
  int n;
  int i = 0;
  while (cin >> n) {
    taksisti_vreme[i] = n;
    i++;
  }

  int taksista = 9999, vreme = 9999;
  for (int j = 1; j <= i; j += 2) {
    if (taksisti_vreme[j] < vreme) {
      vreme = taksisti_vreme[j];
      taksista = taksisti_vreme[j - 1];
    }
  }

  cout << taksista << endl;
  return 0;
}
