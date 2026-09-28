#include <bits/stdc++.h>
using namespace std;

int main () {
    long long n,tong=1;
    cin >> n;
    for (int i=1;i<=n;i++)
        tong*=i;
    cout << tong;
}

