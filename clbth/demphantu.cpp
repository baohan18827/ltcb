#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,a[1000],dem=0;
    cin>>n;
    for (int i=0;i<n;i++)
        cin>>a[i];
    for (int i=0;i<n;i++) {
        int s=0;
        for (int j=i+1;j<n;j++)
            if (a[i]==a[j]&&a[j]!=0) {
                s++;
                a[j]=0;
            }
        if (s>0) dem++;
    }
    cout<<dem;
}
