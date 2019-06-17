#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	int brInsta = 0, brFB = 0, brTw = 0;
    // brInsta - broj korisnika instagrama
	// brFB - broj korisnika facebook-a
	// brTw - broj korisnika twitter-a
	
	string najpopularnijaMreza;
	int maxGlasova;
	for (int i = 1; i <= n; i++)
	{
		int glas;
		cin >> glas;
		if (glas == 1)
			brInsta++;
		else if (glas == 2)
			brFB++;
		else
			brTw++;
	}

	maxGlasova = brInsta;
	najpopularnijaMreza = "Instagram";
	if (maxGlasova < brFB) {
		maxGlasova = brFB;
		najpopularnijaMreza = "Facebook";
	}
	if (maxGlasova < brTw) {
		maxGlasova = brTw;
		najpopularnijaMreza = "Twitter";
	}

	cout << najpopularnijaMreza << endl;
	cout << fixed << setprecision(2) << (maxGlasova * 100.0) / n << "%" << endl;

	return 0;
}