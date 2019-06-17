#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  double t, s, v1;
  cin >> t >> s >> v1;
  // racunamo vreme potrebno prvom autobusu da stigne od grada A do grada B
  double t1 = s / v1;
  // racunamo za koliko vremena drugi autobus mora da stigne od grada A do grada
  // B da bi stigao istovremeno sa prvim
  double t2 = t1 - t;
  // racunamo kojom brzinom mora da se krece drugi autobus da bi za t2 sata
  // presao s km
  double v2 = s / t2;
  cout << fixed << setprecision(2) << v2 << endl;
  return 0;
}