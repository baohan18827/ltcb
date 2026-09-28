#include <bits/stdc++.h>
using namespace std;
    int main(){
        int n,tong=0,dem=0;
        while (cin>>n){
            tong=0;dem=0;
               if (n>=1&&n<=10000000){
            int a=n,b=n;
            while (a!=0){
                dem++;
                a/=10;
            }
            while (b!=0){
                tong+=pow(b%10,dem);
                b/=10;
            }if (tong==n){
                cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
            }
        }
        return 0;
    }
