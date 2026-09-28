#include <iostream>
using namespace std;
int main ()
{
int a,b,c,d,e;
cin>>a;
b=a%10;
c=(a/10)%10;
d=(a/100)%10;
e=a/1000;
int max = b;
    if (max < c ) max = c;
    if (max < d ) max = d;
    if (max < e ) max = e;

    int min = b;
    if (min > c) min = c;
    if (min > d) min = d;
    if (min > e) min = e;

    cout << min + max;
}
