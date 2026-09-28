#include <bits/stdc++.h>
using namespace std;

int main () {
    long long a,n,dem=1;
    cin >> a >> n;
    for (int i = 0; i < n; i++)
        dem *= a;
    cout << dem;
}
