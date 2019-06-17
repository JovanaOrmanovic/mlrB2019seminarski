#include <iostream>
#include <string>

using namespace std;

int brojUDnevniku(const string &ucenik) {
  // stoi je funkcija iz <string> biblioteke, konvertuje string u int
  return stoi(ucenik.substr(2));
}

int main(int argc, char const *argv[]) {
  int n;
  cin >> n;
  string spisakMatematika[n];

  string pomocna = "";
  for (int k = 0; k < n; k++) {
    cin >> pomocna;
    spisakMatematika[k] = pomocna;
  }

  int m;
  cin >> m;
  string spisakProgramiranje[m];

  pomocna = "";
  for (int k = 0; k < m; k++) {
    cin >> pomocna;
    spisakProgramiranje[k] = pomocna;
  }

  int i = 0, j = 0;
  int br = 0;
  while (i < n && j < m) {
    int brUDnevMat = brojUDnevniku(spisakMatematika[i]);
    int brUDnevProg = brojUDnevniku(spisakProgramiranje[j]);
    if (brUDnevMat < brUDnevProg)
      i++;
    else if (brUDnevMat > brUDnevProg)
      j++;
    else {
      br++;
      i++;
      j++;
    }
  }

  cout << br << endl;

  return 0;
}