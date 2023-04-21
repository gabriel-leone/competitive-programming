#include <iostream>

using namespace std;

int main()
{

  int A, B;
  char R;
  cin >> A >> B;

  if (A == 0)
  {
    R = 'C';
  }
  else
  {
    if (B == 0)
    {
      R = 'B';
    }
    else
    {
      R = 'A';
    }
  }
  cout << R;
  return 0;
}