#include <iostream>

using namespace std;

int main()
{
  int k, a = 0, b = 0;
  cin >> k;
  int v[k];

  for (int i = 0; i < k; i++)
  {
    cin >> v[i];
  }

  for (int i = 0; i < k; i++)
  {
    if (v[i] == 1)
    {
      if (a == 1)
      {
        a = 0;
      }
      else if (a == 0)
      {
        a = 1;
      }
    }
    else if (v[i] == 2)
    {
      if (a == 1)
      {
        a = 0;
        if (b == 1)
        {
          b = 0;
        }
        else if (b == 0)
        {
          b = 1;
        }
      }
      else if (a == 0)
      {
        a = 1;
        if (b == 1)
        {
          b = 0;
        }
        else if (b == 0)
        {
          b = 1;
        }
      }
    }
  }
  cout << a << "\n"
       << b;
}
