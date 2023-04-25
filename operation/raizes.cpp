#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int n;
  cin >> n;
  double valor[10000];

  for (int i = 0; i < n; i++)
  {
    cin >> valor[i];
  }

  for (int i = 0; i < n; i++)
  {
    valor[i] = sqrt(valor[i]);
    printf("%.4f\n", valor[i]);
  }
}
