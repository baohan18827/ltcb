#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    bool first = true;

    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int dem = 0;
            while (n % i == 0) {
                n /= i;
                dem++;
            }
            if (!first) cout << " x ";
            cout << i << "^" << dem;
            first = false;
        }
    }

    // nếu còn lại là số nguyên tố > sqrt ban đầu
    if (n > 1) {
        if (!first) cout << " x ";
        cout << n << "^1";
    }
}
