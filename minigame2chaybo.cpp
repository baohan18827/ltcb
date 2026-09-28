#include <bits/stdc++.h>
using namespace std;
int main () {
    int ab,bc,ca,t;
    cin>>ab>>bc>>ca>>t,t1;
    t1=t%(ab+bc+ca);
    if(t1==ab)
        cout<<"B";
    else if(t1==ab+bc)
        cout<<"C";
    else if(t1==0)
        cout<<"A";
    else if(t1<ab)
        cout<<"AB";
    else if(t1<ab+bc)
        cout<<"BC";
    else if(t1<ab+bc+ca)
        cout<<"CA";
}
