#include <iostream>
using namespace std;
int main () {
    int n,s;
    int a[100];
    cin>>n;s=0;
    for (int i=1;i<=n;i++) {
        cin>>a[i];
        s+=a[i];
    }
    cout<<s;
}
