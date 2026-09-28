#include <bits/stdc++.h>
using namespace std;
    int main(){
        int a,b,s,dem,tong;
        cin>>a>>b;s=0;
        for (int i=a;i<=b;i++)
        {
           int t=i;dem=0;tong=0;
            while (t>0){
                dem++;
                t/=10;
            }
            t=i;
            while (t>0){
                tong+=pow(t%10,dem);
                t/=10;
            }
            if (tong==i){
                cout<<i<<" ";
                s++;
            }
        }
        if (s==0) cout<<"-1";
        return 0;
    }
