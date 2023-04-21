#include <iostream>

using namespace std;

int main()
{
  int a, b = 0, i;
  cin >> a;
  int v[a];
  for (int j = 0; j < a; j++)
  {
    cin >> v[j];
  }
  for (i = 0; b < 1000000 && i < a; i++)
  {
    b = b + v[i];
  }
  cout << i;
}
