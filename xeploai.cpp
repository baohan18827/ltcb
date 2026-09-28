#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,s,i;s=0;i=0;
    while (cin>>a&&a!=-1){
        i++;
        s+=a;
    }
    float dtb=s*1.0/i;
    if (dtb<4) cout<<"F";
    else if (dtb<5.5&&dtb>=4) cout<<"D";
    else if (dtb<7.0&&dtb>=5.5) cout<<"C";
    else if (dtb<8.5&&dtb>=7.0) cout<<"B";
    else if (dtb>=8.5) cout<<"A";
}

