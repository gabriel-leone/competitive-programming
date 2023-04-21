#include <iostream>

using namespace std;

int main()
{
  int b, c;
  cin >> b >> c;
  b = b + c;
  b = b % 2;
  if (b == 0)
  {
    cout << "Bino";
  }
  else
  {
    cout << "Cino";
  }
}
