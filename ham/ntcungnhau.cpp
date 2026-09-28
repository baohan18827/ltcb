#include <iostream>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main() {
    int a,b ;
    cin >>a>>b;
        if (gcd(a,b) == 1) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
