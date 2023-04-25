#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int code1, code2, qt1, qt2;
  float price1, price2;
  cin >> code1 >> qt1 >> price1 >> code2 >> qt2 >> price2;
  float total = qt1 * price1 + qt2 * price2;
  cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << total << endl;
}
