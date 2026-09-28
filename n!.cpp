#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,s;
    cin>>n;s=1;
    for (int i=1;i<=n;i++)
        s*=i;
    cout<<s;
}
