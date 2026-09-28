#include <iostream>
using namespace std;
int main () {
    long long a = 0, b = 1, c = 0, n;
    cin >> n;
    cout << "0 1 ";
    while (true) {
        c = a + b;
        if (c > n) break;
        cout << c << " ";
        a = b;
        b = c;
    }
}
