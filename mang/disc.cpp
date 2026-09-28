#include <iostream>
using namespace std;

int main() {
    long n, m;
    cin >> n >> m;

    long b[100000];
    for (long i = 1; i <= n; i++) {
        b[i] = i;
    }
    for (long i = 1; i <= m; i++) {
        long x;
        cin >> x;
        for (long j = 1; j <= n; j++) {
            if (b[j] == x) {
                for (long k = j; k > 1; k--) {
                    b[k] = b[k - 1];
                }
                b[1] = x;
                break;
            }
        }
    }

    for (long i = 1; i <= n; i++) {
        cout << b[i] << " ";
    }
}
