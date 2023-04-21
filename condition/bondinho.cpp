#include <iostream>

using namespace std;

int main()
{
  int A, M;
  cin >> A >> M;

  A = A + M;
  if (A <= 50)
  {
    cout << 'S';
  }
  else
  {
    cout << 'N';
  }

  return 0;
}
