#include <bits/stdc++.h>
using namespace std;
int main () {
    int a,b,c;
    cin>>a>>b;c=a*b;
    while (b!=0) {
        int r=a%b;
        a=b;
        b=r;
    }
    cout<<a<<" "<<c/a;
}
