#include <iostream>

using namespace std;

int main()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  a = a * b;
  c = c * d;
  if (a == c)
  {
    cout << "0";
  }
  else if (a > c)
  {
    cout << "-1";
  }
  else if (c > a)
  {
    cout << "1";
  }
}
