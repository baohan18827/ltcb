#include<bits/stdc++.h>
using namespace std;
bool snt(int n) {
    if (n < 2) return false;
    for (int i=2;i<=sqrt(n);i++)
        if (n%i==0) return false;
    return true;
}
int main () {
    int k,max,n=0;
    int a[100];
    cin>>k;max=-1;
    while (cin>>a[n]){
        if (snt(a[n])&&a[n]>max&&a[n]<=k)
            max=a[n];
        n++;
    }
    cout<<max;
}
