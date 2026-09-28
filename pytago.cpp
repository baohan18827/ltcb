#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    if (n<5) cout<<"-1";
    for (int i=3;i<=n;i++)
        for (int j=i+1;j<=n;j++) {
            int k=sqrt(i*i+j*j);
                if (k<=n&&k*k==i*i+j*j)
                    cout<<i<<" "<<j<<" "<<k<<endl;
        }
}
