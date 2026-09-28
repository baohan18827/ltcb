#include <iostream>
using namespace std;
int main () {
    int m,x=0;
    int a[100];
    cin>>m;
    while (cin>>a[x])
        x++;
    for (int i=m;i<x-1;i++)
        a[i]=a[i+1];
    for (int i=0;i<x-1;i++)
        cout<<a[i]<<" ";
}
