#include <bits/stdc++.h>
using namespace std;
int main(){
    int k;
    int tong=0;
    int x;
    int i=0;
    int o=0;
    cin>>k;
    int a[k];
    int n[k];
    for (; i<k; i++){
        cin>>a[i];
    }
    for (; o<k; o++){
        cin>>n[o];
    }
    cin>>x;
    for (int u = 0; u < k; u++) {
    if (a[u] == 0) continue;

    if (a[u] != 1 || n[u] == 0)
        cout << a[u];

    if (n[u] > 0) {
        cout << "x";
        if (n[u] > 1)
            cout << "^" << n[u];
    }

    if (u != k - 1)
        cout << " + ";
}
    for (int t =0; t<k; t++){
        tong=tong +(a[t] * pow (x,n[t]));
    }
    cout<<endl<<tong<<endl;
    for (int j=0; j<k ; j++){
        a[j]=a[j]*n[j];
        n[j]=n[j]-1;
    }
    for (int u = 0; u < k; u++) {
    if (a[u] == 0) continue;

    if (a[u] != 1 || n[u] == 0)
        cout << a[u];

    if (n[u] > 0) {
        cout << "x";
        if (n[u] > 1)
            cout << "^" << n[u];
    }

    if (u != k - 1)
        cout << " + ";
}
}
