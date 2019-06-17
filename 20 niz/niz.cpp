#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int n;
  cin >> n;
  int a[n];
  int b[(int)n / 2];
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a[i] = x;
  }
  for (int j = 0; j < n / 2; j++) {
    b[j] = a[j] * a[n - 1 - j];
  }
  for (int k = 0; k < n / 2; k++) {
    cout << b[k] << " ";
  }
  cout << endl;

  return 0;
}