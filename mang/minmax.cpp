#include <bits/stdc++.h>
using namespace std;
int main () {
    int a[100];
    int x,min,max,n=0;
    while (cin>>x) {
        n++;
        a[n]=x;
    }
    min=a[1];max=a[1];
    for (int i=1;i<=n;i++) {
        if (a[i]<min)
            min=a[i];
        if (a[i]>max)
            max=a[i];
    }
    cout<<min<<"\n"<<max<<"\n"<<min+max;
}
