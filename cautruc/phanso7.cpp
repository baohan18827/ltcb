#include <bits/stdc++.h>
using namespace std;
struct ps {
    int tu, mau;

    int ucln(int a, int b) {
        while (b != 0) {
            int r = a % b;
            a = b;
            b = r;
        }
        return a;
    }

    void rg() {
        int d = ucln(tu, mau);
        tu /= d;
        mau /= d;
        if (mau < 0) {
            tu = -tu;
            mau = -mau;
        }
        if (tu==0)
            cout<<"0";
        else cout<<tu<<"/"<<mau<<endl;
    }
};
int main() {
ps a,b,tong,hieu,tich,thuong;
cin>>a.tu>>a.mau>>b.tu>>b.mau;
if (a.mau==0||b.mau==0) cout<<-1;
else {
    tong.tu=a.tu*b.mau+b.tu*a.mau;
    tong.mau=a.mau*b.mau;
    tong.rg();
    hieu.tu=a.tu*b.mau-b.tu*a.mau;
    hieu.mau=a.mau*b.mau;
    hieu.rg();
    tich.tu=a.tu*b.tu;
    tich.mau=a.mau*b.mau;
    tich.rg();
    if (b.tu!=0) {
        thuong.tu=a.tu*b.mau;
        thuong.mau=a.mau*b.tu;
        thuong.rg();
    }

}
}

