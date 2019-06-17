#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <numeric>
#include <random>
#include <sstream>
#include <string>
#include <tuple>
#include <vector>

using namespace std;

extern int rand_seed;
mt19937_64 random_generator(rand_seed);

int random_value(int i, int j) {
  uniform_int_distribution<int> dist(i, j);
  return dist(random_generator);
}

int random_index(int j) { return random_value(0, j - 1); }

long long random_value(long long i, long long j) {
  uniform_int_distribution<long long> dist(i, j);
  return dist(random_generator);
}

unsigned long long random_value_ul(unsigned long long i, unsigned long long j) {
  uniform_int_distribution<unsigned long long> dist(i, j);
  return dist(random_generator);
}

double random_value(double i, double j) {
  uniform_real_distribution<double> dist(i, j);
  return dist(random_generator);
}

bool random_bool(int positive = 1, int total = 2) {
  return random_value(1, total) <= positive;
}

int random_around(int i, double percent = 0.2) {
  return random_value((int)round((1 - percent) * i),
                      (int)round((1 + percent) * i));
}

int random_around_up(int i, double percent = 0.2) {
  return random_value(i, (int)round((1 + percent) * i));
}

int random_around_down(int i, double percent = 0.2) {
  return random_value((int)round((1 - percent) * i), i);
}

vector<int> random_array(int n, int min, int max) {
  vector<int> result(n);
  for (int i = 0; i < n; i++)
    result[i] = random_value(min, max);
  return result;
}

vector<double> random_array(int n, double min, double max) {
  vector<double> result(n);
  for (int i = 0; i < n; i++)
    result[i] = random_value(min, max);
  return result;
}

vector<int> random_sorted_array(int n, int min, int dmin, int dmax) {
  vector<int> result(n);
  result[0] = min;
  for (int i = 1; i < n; i++)
    result[i] = result[i - 1] + random_value(dmin, dmax);
  return result;
}

string random_string_alpha_(int from, int to, int numLetters = 26) {
  int n = random_value(from, to);
  string rez(n, ' ');
  for (int i = 0; i < n; i++)
    rez[i] = (random_value(0, 1) ? 'a' : 'A') + random_value(0, numLetters - 1);
  return rez;
}

string random_string_alpha(int n, int numLetters = 26) {
  return random_string_alpha_(n, n, numLetters);
}

string random_string_lower(int n, int numLetters = 26) {
  string rez(n, ' ');
  for (int i = 0; i < n; i++)
    rez[i] = 'a' + random_value(0, numLetters - 1);
  return rez;
}

string random_string_upper(int n, int numLetters = 26) {
  string rez(n, ' ');
  for (int i = 0; i < n; i++)
    rez[i] = 'A' + random_value(0, numLetters - 1);
  return rez;
}

string random_string_digits(int n, int numLetters = 10) {
  string rez(n, ' ');
  for (int i = 0; i < n; i++)
    rez[i] = '0' + random_value(0, numLetters - 1);
  return rez;
}

vector<int> sizes(int num_OK, int OK_size, int num_TLE, int TLE_size) {
  vector<int> result;
  result.reserve(num_OK + num_TLE);
  for (int i = 0; i < num_OK; i++)
    result.push_back(random_around(OK_size, 0.2));
  for (int i = 0; i < num_TLE; i++)
    result.push_back(random_around_up(TLE_size, 0.2));
  return result;
}

vector<int> sizes_n(int num_OK, int num_TLE) {
  const int OK_size = 100;
  const int TLE_size = 20000;
  return sizes(num_OK, OK_size, num_TLE, TLE_size);
}

vector<int> sizes_n2(int num_OK, int num_TLE) {
  const int OK_size = 50;
  const int TLE_size = 1000;
  return sizes(num_OK, OK_size, num_TLE, TLE_size);
}

vector<int> sizes_n3(int num_OK, int num_TLE) {
  const int OK_size = 10;
  const int TLE_size = 100;
  return sizes(num_OK, OK_size, num_TLE, TLE_size);
}

vector<int> sizes_nlogn(int num_OK, int num_TLE) {
  const int OK_size = 100;
  const int TLE_size = 20000;
  return sizes(num_OK, OK_size, num_TLE, TLE_size);
}

template <class T>
void print_array(const vector<T> &a, ostream &tin,
                 bool doNotPrintSize = false) {
  if (!doNotPrintSize)
    tin << a.size() << endl;
  for (auto x : a)
    tin << x << endl;
}

template <class T>
void print_array_inline(const vector<T> &a, ostream &tin,
                        bool doNotPrintSize = false) {
  if (!doNotPrintSize)
    tin << a.size() << endl;
  for (int i = 0; i < a.size(); i++) {
    tin << a[i];
    if (i != a.size() - 1)
      tin << " ";
  }
  tin << endl;
}

void print_array_inline(const vector<double> &a, ostream &tin,
                        bool doNotPrintSize = false, int decimals = 2) {
  if (!doNotPrintSize)
    tin << a.size() << endl;
  for (int i = 0; i < a.size(); i++) {
    tin << showpoint << fixed << setprecision(decimals) << a[i];
    if (i != a.size() - 1)
      tin << " ";
  }
  tin << endl;
}

void print_random_time(ostream &out) {
  int h, m, s;
  h = random_value(0, 23);
  out << h << endl;
  m = random_value(0, 59);
  out << m << endl;
  s = random_value(0, 59);
  out << s << endl;
}

void print_random_angle(ostream &out) {
  int st = random_value(0, 359);
  int min = random_value(0, 59);
  int sek = random_value(0, 59);
  out << st << endl;
  out << min << endl;
  out << sek << endl;
}

// provera da li je data godina prestupna
bool isLeap(int year) {
  // year je prestupna ako je deljiva sa 4 i nije deljiva sa 100,
  // ili ako je deljiva sa 400
  return (year % 4 == 0 && year % 100 != 0) || (year % 400) == 0;
}

// broj dana u datom mesecu date godine
int daysInMonth(int month, int year) {
  switch (month) {
    // januar, mart, maj, jul, avgust, oktobar, decembar
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    return 31;
    // april, jun, septembar, novembar
  case 4:
  case 6:
  case 9:
  case 11:
    return 30;
    // februar
  case 2:
    return isLeap(year) ? 29 : 28;
  }
}

tuple<int, int, int> random_date(int yearFrom = 1900, int yearTo = 2100) {
  int y = random_value(yearFrom, yearTo);
  int m = random_value(1, 12);
  int d = random_value(1, daysInMonth(m, y));
  return make_tuple(y, m, d);
}

extern int test_count;
extern string naziv_zadatka;

void gen_test(int i, ostream &tin);

void gen_tests(string data_folder, int test_count) {
  int mkdirRet = system(("mkdir " + data_folder).c_str());
  for (int i = 1; i <= test_count; i++) {
    ofstream tin;
    stringstream buf;
    buf << setw(2) << setfill('0') << i;
    string file = data_folder + "/" + naziv_zadatka + "_" + buf.str();
    string inFile = file + ".in";
    tin.open(inFile.c_str());
    gen_test(i, tin);
    tin.close();
    string outFile = file + ".out";
    string command = naziv_zadatka + ".exe" + " < " + inFile + " > " + outFile;
#ifdef __unix__
    command = "./" + command;
#endif
    cout << command << endl;
    assert(system(command.c_str()) == 0);
  }
}

int main(int argc, char *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  srand(rand_seed);
  if (argc != 2)
    cerr << "Program ocekuje argumete: <izlazni folder>";
  else
    gen_tests(argv[1], test_count);
}
