#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; float s,k;
    cin>>n;
    s=1;
    for (int i=0;i<=n;i++) {
        s*=(2.0*(i+1)/(2*i+3));
        k+=s;
    }
    cout<<fixed<<setprecision(2)<<s+1;
}
