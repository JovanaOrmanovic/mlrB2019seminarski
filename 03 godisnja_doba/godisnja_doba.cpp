#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    int dan, mesec;
    string godDoba = "";
    cin >> dan >> mesec;
    switch (mesec)
    {
    case 1:
    case 2:
        godDoba = "ZIMA";
        break;
    case 3:
        if (dan <= 20) godDoba = "ZIMA";
        else godDoba = "PROLECE";
        break;
    case 4:
    case 5:
        godDoba = "PROLECE";
        break;
    case 6:
        if (dan <= 21) godDoba = "PROLECE";
        else godDoba = "LETO";
        break;
    case 7:
    case 8:
        godDoba = "LETO";
        break;
    case 9:
        if (dan <= 22) godDoba = "LETO";
        else godDoba = "JESEN";
        break;
    case 10:
    case 11:
        godDoba = "JESEN";
        break;
    case 12:
        if (dan <= 21) godDoba = "JESEN";
        else godDoba = "ZIMA";
        break;
    }
    cout << godDoba << endl;
    return 0;
}