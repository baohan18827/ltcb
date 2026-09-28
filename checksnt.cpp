#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,s;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        s=0;
        for (int j=1;j<=i;j++)
            if (i%j==0) s++;
        if (s==2) cout<<i<<" ";
    }
}
