#include <iostream>
using namespace std;
int main () {
    int a,s;
    cin >> a;
    if (a<=16)
{
        s=a*7000; cout <<s;
    }
     else if (a>=17 and a<=50) {
        s=16*7000 + (a-16)*8500;cout <<s;
     }
     else {s=16*7000 + 34*8500 + (a-50)*100000; cout <<s;}
}
