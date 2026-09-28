#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int uoc=0;
    for (int i=1;i<=m;i++)
        if (m%i==0) uoc+=i;
    int tich=1;
    while (n>0)
    {
        tich=tich*(n%10);
        n=n/10;
    }
    if (tich==uoc) cout<<"YES";
    else cout<<"NO";
}
