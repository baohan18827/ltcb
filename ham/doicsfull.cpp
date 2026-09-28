#include <bits/stdc++.h>
using namespace std;
void coso2(int n){
    if (n==0) return ;
    coso2(n/2);
    cout<<n%2;
}
void coso8(int n){
    if (n==0) return ;
    coso8(n/8);
    cout<<n%8;
}
void coso16(int n){
    if (n==0) return ;
    coso16(n/16);
    if (n%16<10){
        cout<<n%16;
    } else {
        cout<<char('A'+(n%16)-10);
    }
}
int main(){
    int n,so;
    cin>>n>>so;
    if (so==0) {
        coso2(n);
    }
    if (so==1) {
        coso8(n);
    }
    if (so==2) {
        coso16(n);
    }
}
