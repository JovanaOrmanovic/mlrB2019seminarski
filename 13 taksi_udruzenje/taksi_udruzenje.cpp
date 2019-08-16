#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int brMin,Min;
  int brPotencijalnogMin,minDoDolaska;
  cin>>brMin>>Min;
  while (cin>>brPotencijalnogMin>>minDoDolaska) {
    if (minDoDolaska < Min){
        brMin = brPotencijalnogMin;
        Min = minDoDolaska;
	}
  }
  cout << brMin << endl;
  return 0;
}

