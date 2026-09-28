#include <iostream>
using namespace std;
int main() {
    int i, n;
    cin >> i >> n;
    int dem = 0, a = n;
    while (a > 0) {
        dem++;
        a /= 10;
    }
    if (i >= dem || i < 0) {
        cout << -1;
        return 0;
    }
    int vitri = dem - i - 1;
    while (vitri > 0) {
        n /= 10;
        vitri--;
    }
    cout << n % 10;
    return 0;
}
