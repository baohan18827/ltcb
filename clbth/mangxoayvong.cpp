#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, a[100], b[100];
    cin >> n >> k;
    k %= n;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    int idx = 0;

    // Lấy k phần tử cuối
    for(int i = n - k; i < n; i++)
        b[idx++] = a[i];

    // Lấy n-k phần tử đầu
    for(int i = 0; i < n - k; i++)
        b[idx++] = a[i];

    for(int i = 0; i < n; i++)
        cout << b[i] << " ";
}
