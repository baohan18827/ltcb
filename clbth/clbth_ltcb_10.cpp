#include <bits/stdc++.h>
using namespace std;
void nhiphan(int n){
    if (n==0) return ;
    nhiphan(n/2);
    cout<<n%2;
}
int main (){
    int n;
    cin>>n;
    nhiphan(n);
}
