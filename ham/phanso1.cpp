#include <iostream>
using namespace std;

int ucln(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int tu1, mau1, tu2, mau2;
    cin >> tu1 >> mau1;
    cin >> tu2 >> mau2;

    if (mau1 == 0 || mau2 == 0) {
        cout << -1;
        return 0;
    }

    int tu = tu1 * mau2 + tu2 * mau1;
    int mau = mau1 * mau2;

    int uc = ucln(abs(tu), abs(mau));
    tu /= uc;
    mau /= uc;

    cout << tu << "/" << mau;
    return 0;
}
