#include <bits/stdc++.h>
using namespace std;
struct ps {
    int tu,mau;
    int ucln (int a,int b) {
        while (b!=0) {
        int r=a%b;
        a=b;
        b=r;
        }
        return a;
    }
    void rg () {
        int d=ucln(tu,mau);
        tu/=d;
        mau/=d;
        if (mau<0){
            tu=-tu;
            mau=-mau;
        }
    }
};
int main (){
    ps a,a1,mn,mx;
    cin>>a.tu>>a.mau;
    mn.tu=a.tu;mn.mau=a.mau;
    mx.tu=a.tu;mx.mau=a.mau;    mx.rg();mn.rg();
    while (cin>>a1.tu>>a1.mau) {
        a1.rg();
        if (mn.tu*a1.mau>a1.tu*mn.mau) {
            mn.tu=a1.tu;mn.mau=a1.mau;
        }
        if (mx.tu*a1.mau<a1.tu*mx.mau) {
            mx.tu=a1.tu;mx.mau=a1.mau;
        }
    }
    mx.rg();mn.rg();
    cout<<mx.tu<<"/"<<mx.mau<<endl<<mn.tu<<"/"<<mn.mau;
}
