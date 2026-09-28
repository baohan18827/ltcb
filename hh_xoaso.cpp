#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int max=0;
    int so;
    for (int i=1;i<=a;i=i*10)
    {
        so=(a/(i*10))*i+(a%i);
        if (so>max
            max=so;
    }
    cout<<max;
}
