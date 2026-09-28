#include <bits/stdc++.h>
using namespace std;
bool snt (int n) {
    if (n<2) return false;
    else
        for (int i=2;i*i<=n;i++)
            if (n%i==0) return false;
    return true;
}
int main (){
    int a,b,s,dem=0;
    cin>>a>>b;
    for (int i=a;i<=b;i++){
        bool check=true;int j;j=i;s=0;
        if (!snt(j)) check=false;
        while (j>0){
            if (!snt(j%10)) {
                check=false;
                break;
            }
        s+=j%10;
        j/=10;
        }
        if  (!snt(s)) check=false;
        if (check) dem++;
    }
    cout<<dem;
}
