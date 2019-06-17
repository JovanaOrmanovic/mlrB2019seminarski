#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int n, s, brDevojcica, brDecaka;
  cin >> n >> s;
  brDecaka = s - 3 * n;
  brDevojcica = n - brDecaka;
  cout << brDecaka << endl;
  cout << brDevojcica << endl;
  return 0;
}