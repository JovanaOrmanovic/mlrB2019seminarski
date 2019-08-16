#include "../tgen.hpp"

int rand_seed = 0;
int test_count = 10;
string naziv_zadatka = "taksi_udruzenje";

void gen_test(int i, ostream &tin)
{
    int n = random_value(3, 10);
    vector<int> taksi_numb = random_array(n, 1, 50);
    vector<int> taksi_time = random_array(n, 1, 35);
    for (int i = 0; i < n; i++)
    {
        tin << taksi_numb[i] << " " << taksi_time[i] << endl;
    }
}
