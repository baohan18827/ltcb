#include <iostream>
using namespace std;
int main() {
    long a,s;s=0;
    cin>>a;
    if (a<=1) cout << "NO";
    else {
        for (int i=1;s<a;i++)
            s+=i;
        if (s==a) cout <<"YES";
        else cout <<"NO";
    }
}
