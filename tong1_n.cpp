#include <iostream>
using namespace std;
int main () {
    long a,s;
    cin>>a;s=0;
    for (int i=1;i<=a;i++)
        s+=i;
    cout<<s;
    return 0;
}
