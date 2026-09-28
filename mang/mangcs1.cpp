#include <iostream>
using namespace std;
int main () {
    int m,n,x=0;
    int a[100];
    cin>>m>>n;
    while (cin>>a[x])
        x++;
    for (int i=x;i>m;i--)
        a[i]=a[i-1];
    a[m]=n;
    for (int i=0;i<=x;i++)
        cout<<a[i]<<" ";
}
