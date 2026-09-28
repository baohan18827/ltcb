#include <bits/stdc++.h>
using namespace std;
struct thongtin {
    string ms,sdt,nm;
};
int main() {
    int n;
    cin>>n;
    thongtin a[100];
    for (int i=0;i<n;i++){
        cin>>a[i].ms>>a[i].sdt>>a[i].nm;
    }
    string sdt;
    cin>>sdt;
    for (int i=0;i<n;i++)
        if (a[i].sdt.substr(0,3)==sdt.substr(0,3))
            cout<<a[i].ms<<":"<<a[i].sdt<<":"<<a[i].nm;
}
