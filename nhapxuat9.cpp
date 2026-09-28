#include <iostream>
using namespace std;
int main () {
    int a,b;
    cin >> a;
    b=a/1000;
    if (b<1)
    {
        cout << "-1";
    }
    else if (b<10)
    {
        cout << b;
    }
    else cout << b%10;
}
