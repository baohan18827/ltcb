#include <bits/stdc++.h>
using namespace std;
struct diem {
    double x;
    double y;
};
void nhapDiem(diem &d) {
    cin>>d.x>>d.y;
}
void xuatDiem(diem &d) {
    cout<<"("<<d.x<<","<<d.y<<") ";
}
double khoangcach(diem &a,diem &b){
    return (sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2)));
}
bool trungnhau (diem &a,diem &b) {
    if (a.x==b.x&&a.y==b.y)
        return true;
    return false;
}
struct tamgiac {
    diem a,b,c;
};
void nhapTamGiac (tamgiac &x){
    nhapDiem(x.a);
    nhapDiem(x.b);
    nhapDiem(x.c);
}
void xuatTamGiac (tamgiac &x){
    xuatDiem(x.a);
    xuatDiem(x.b);
    xuatDiem(x.c);
}
double chuvi (tamgiac &x) {
    double ab = khoangcach(x.a,x.b);
    double bc = khoangcach(x.b,x.c);
    double ac = khoangcach(x.a,x.c);
    return ab + bc + ac;
}
bool sosanh (tamgiac &s,tamgiac &t) {
    if (chuvi(s)<chuvi(t))
        return true;
    return false;
}
bool trung (tamgiac &s,tamgiac &t) {
    int dem=0;
    if (trungnhau(s.a,t.a)||trungnhau(s.a,t.b)||trungnhau(s.a,t.c)) dem++;
    if (trungnhau(s.b,t.a)||trungnhau(s.b,t.b)||trungnhau(s.b,t.c)) dem++;
    if (trungnhau(s.c,t.a)||trungnhau(s.c,t.b)||trungnhau(s.c,t.c)) dem++;
    if (dem==3)
        return true;
    return false;
}
int main() {
tamgiac a,b;
nhapTamGiac(a);
nhapTamGiac(b);
xuatTamGiac(a);
cout<<endl;
xuatTamGiac(b);
cout<<endl;
if (sosanh(a,b)) cout<<"TRUE\n"; else cout<<"FALSE\n";
if (trung(a,b)) cout<<"TRUE"; else cout<<"FALSE";
}
