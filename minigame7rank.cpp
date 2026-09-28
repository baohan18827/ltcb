#include <bits/stdc++.h>
using namespace std;
int main () {
    int vn,bn,dn,vt,bt,dt,xh;
    cin>>vn>>bn>>dn>>vt>>bt>>dt;
    cin>>xh;
    if (xh==1) {
        if (vn+bn+dn>vt+bt+dt) cout<<"VN";
        else if (vn+bn+dn<vt+bt+dt) cout<<"TL";
        else cout<<"TIE";
    }
    else {
        if (vn>vt) cout<<"VN";
        else if (vn<vt) cout<<"TL";
        else {
            if (bn>bt) cout<<"VN";
            else if (bn<bt) cout<<"TL";
            else {
                if (dn>dt) cout<<"VN";
                else if (dn<dt) cout<<"TL";
                else cout<<"TIE";
            }
        }
    }
}
