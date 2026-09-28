#include <bits/stdc++.h>
using namespace std;
void coso2(int n){
    if (n==0) return ;
    coso2(n/2);
    cout<<n%2;
}
int main(){
    int n;
    cin>>n;
    if (n==0) cout<<"0";
    else coso2(n);

}
