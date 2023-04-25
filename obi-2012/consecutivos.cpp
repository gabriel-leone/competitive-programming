#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int ans = 1;
  int tempAns = 1;
  int v[n];

  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  for (int i = 0; i < n - 1; i++)
  {
    if (v[i] == v[i + 1])
    {
      tempAns++;
      if (tempAns > ans)
        ans = tempAns;
    }
    else
    {
      tempAns = 1;
    }
  }
  cout << ans;
}
