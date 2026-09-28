#include <bits/stdc++.h>
using namespace std;
int main (){
    double p,r,t,m;
    long long n,s;
    cin>>p>>r>>t>>n>>s;
    for (int i=1;i<=n;i++) {
        p=p*(1+r/100)+t*12;
    if (p>s) p=p*90/100;
    }
    cout<<fixed<<setprecision(2)<<p;
}
