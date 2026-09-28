#include <iostream>
using namespace std;
int main () {
    int a,b,c,sm;
    for (int i=100;i<1000;i++) {
        a=i/100;
        b=i/10%10;
        c=i%10; sm=i/10*100+c;
        if ((c==b+3)&&(c==a+6)&&(sm-i==2250))
            cout<<i;
    }
}
