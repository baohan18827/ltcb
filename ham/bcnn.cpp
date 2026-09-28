#include <iostream>
using namespace std;
int bcnn(int a,int b) {
    int d=a*b;
    while (b != 0) {
        int r=a%b;
        a=b;
        b=r;
    }
    return d/a;
    }
int main() {
    int a,b;
    cin>>a>>b;
    cout<<bcnn(a,b);
}
