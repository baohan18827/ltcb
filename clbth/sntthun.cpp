#include <bits/stdc++.h>
using namespace std;
bool snt (int n) {
    if (n<2) return false;
    for (int i=2;i*i<=n;i++)
        if (n%i==0) return false;
    return true;
}
int main (){
    int n;
    cin>>n;
    int dem = 0;
    int i = 2;

    while (dem < n) {
        if (snt(i)) {
            dem++;
        }
        i++;
    }

    cout << i - 1;
}
