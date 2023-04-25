#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  float valueHour;
  int code, hours;
  cin >> code >> hours >> valueHour;
  float salary = hours * valueHour;
  cout << "NUMBER = " << code << "\nSALARY = U$ " << fixed << setprecision(2) << salary << endl;
}
