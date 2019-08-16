#include "../tgen.hpp"

int rand_seed = 0;
int test_count = 10;
string naziv_zadatka = "more";

void gen_test(int i, ostream &tin)
{
    const vector<string> agencije =
    {
        "WorldTravel",
        "AIRTours",
        "ApolonTravel",
        "ArgusTours",
        "BalkanFun",
        "KonTiki",
        "Oktopod",
        "BalkanExpress",
        "AsiaTours",
        "SerbiaTravel",
        "StudentHoliday"
    };

    int brojAgencija = random_value(1, 10);

    for (int i = 0; i < brojAgencija; ++i)
    {
        tin << agencije[i] << " " << random_value(185, 533) << endl;
    }
}
