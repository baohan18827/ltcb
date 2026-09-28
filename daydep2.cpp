#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,s;s=0;
    while (cin>>a && a!=0)
        s+=a;
    if (s%100==0) cout<<"DEP";
    else if (s%100==55) cout<<"TRUNG BINH";
    else cout<<"XAU";

}
