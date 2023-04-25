#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float a,b;cin>>a>>b;
    float media;
    media = (a*3.5+b*7.5)/11;
    cout << fixed << setprecision(5) << "MEDIA = " << media << endl;
}
