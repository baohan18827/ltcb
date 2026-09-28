#include <bits/stdc++.h>
using namespace std;
struct thongtin {
    string ten;
    int like,share,cmt,diem;
};
int main() {
    thongtin a[100];
    int s=0;
    while (cin >> a[s].ten && a[s].ten != "000") {
        cin>>a[s].like;
        cin>>a[s].cmt;
        cin>>a[s].share;
        a[s].diem=a[s].like+a[s].cmt*2+a[s].share*3;
        s++;
    }
    for (int i=0; i<=s-1; i++)
        for (int j=i+1;j<s; j++)
            if (a[i].diem < a[j].diem)
                swap(a[i],a[j]);
    for (int i=0; i<3; i++)
        cout<<a[i].ten<<endl;
}
