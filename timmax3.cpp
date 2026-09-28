#include <iostream>
using namespace std;
int main ()
{
int a,b,c,d,e,max;
cin >> a >> b >> c >> d >> e;
max=a;
    if (max < b ) max = b;
    if (max < c ) max = c;
    if (max < d ) max = d;
    if (max < e ) max = e;

    cout << max;
}
