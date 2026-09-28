#include <iostream>
using namespace std;
int main () {
    int x,s;
    while (cin>>x) {
        s=0;
        for (int t=x;t>0;t/=10)
            s += t % 10;
        cout<<s<<endl;
    }
    return 0;
}
