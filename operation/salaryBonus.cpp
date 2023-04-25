#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
  double baseSalary;
  double bonus;
  string name;
  getline(cin, name);
  cin >> baseSalary >> bonus;
  double salary = baseSalary + bonus * 0.15;
  cout << "TOTAL = R$ " << fixed << setprecision(2) << salary << endl;
}
