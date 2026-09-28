#include <bits/stdc++.h>
using namespace std;
int main (){
    double a[7],max,min;
    for (int i=0;i<=6;i++) {
        cin>>a[i];
        if (a[i]<10) cout<<a[i]<<" ";
    }
    cout<<endl;
    max=a[0];min=a[0];
    for (int i=1;i<=6;i++) {
        if (a[i]>max) max=a[i];
        if (a[i]<min) min=a[i];
    }
    cout<<min<<endl<<max;
}
