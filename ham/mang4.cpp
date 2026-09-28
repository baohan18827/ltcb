#include <bits/stdc++.h>
using namespace std;
bool nt(int x) {
    int s=0;
    for (int i=1;i<=x;i++)
        if (x%i==0) s++;
    if (s==2) return true;
    else return false;
}
int main(){
    int n; int a[100];
    cin>>n;
    for (int i=1;i<=n;i++)
        cin>>a[i];
    int s=0;
    for (int i=1;i<=n;i++)
        if (nt(a[i])) s+=a[i];
    cout<<s;
}
