#include <bits/stdc++.h>
using namespace std;
int main()
{
    long a,b,c,tong;
    cin>>a>>b>>c;
    tong=0;
    while (a>0) {
        tong+=a%10;
        a=a/10;
    }
    while (b>10) b=b/10;
    if (tong+b==c) cout<<"Yes";
    else cout<<"No";
}
