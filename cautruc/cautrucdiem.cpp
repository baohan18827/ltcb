#include <bits/stdc++.h>
using namespace std;
struct diem {
    double x;
    double y;
};
void nhap(diem &d) {
    cin>>d.x>>d.y;
}
void xuat(diem &d) {
    cout<<"("<<d.x<<","<<d.y<<") ";
}
double dodai(diem &a,diem &b){
    double x= sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
    return x;
}
bool thanghang (diem &a,diem &b,diem &c){
    double abx=b.x-a.x;
    double aby=b.y-a.y;
    double acx=c.x-a.x;
    double acy=c.y-a.y;
    if (abx*acy - aby*acx==0)
        return true;
    return false;
}
void SP (diem &a,diem &b,diem &c) {
    double ab = dodai(a, b);
    double bc = dodai(b, c);
    double ac = dodai(c, a);
    double p = ab + bc + ac;
    double q = p/2;
    double s = sqrt(q*(q-ab)*(q-bc)*(q-ac));
    cout<<fixed<<setprecision(3)<<s<<" "<<fixed<<setprecision(3)<<p;
}
int main() {
   diem a,b,c;
   nhap(a);
   nhap(b);
   nhap(c);
   xuat(a);
   xuat(b);
   xuat(c);
   cout<<endl;
   cout<<fixed<<setprecision(3)<<dodai(a,b)<<endl;
   cout<<fixed<<setprecision(3)<<dodai(c,a)<<endl;
   cout<<fixed<<setprecision(3)<<dodai(b,c)<<endl;
   if (thanghang(a,b,c))
        cout<<"-1";
   else SP(a,b,c);
}
