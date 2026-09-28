#include <bits/stdc++.h>
using namespace std;

int main () {
    long long n,x=0;
    cin >> n;
    while (n<=1000000000) {
        n*=2;
        x++;
    }
    cout << x;
}
