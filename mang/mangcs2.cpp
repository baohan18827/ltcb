#include <iostream>
using namespace std;
int main () {
    int n,dem=0;
    int a[100];
        while (cin>>n)
            a[++dem]=n;
    for (int i=1;i<=dem;i++)
        cout<<a[i]<<" ";
}
