#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,s,t;
    cin>>a>>b;s=0;t=0;
    for (int i=1;i<a;i++)
        if (a%i==0) s+=i;
    for (int j=1;j<b;j++)
        if (b%j==0) t+=j;
    if (s==b&&t==a) cout<<"YES";
    else cout<<"NO";
}
