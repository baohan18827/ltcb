#include <iostream>
using namespace std;

struct phanso {
    int tu;
    int mau;

    int ucln(int a, int b) {
        while (b != 0) {
            int r = a % b;
            a = b;
            b = r;
        }
        return a;
    }

    void rutgon() {
        int d = ucln(tu, mau);
        tu /= d;
        mau /= d;
    }
};

int main() {
    int n;
    cin >> n;
    phanso phansonn;
    cin >> phansonn.tu >> phansonn.mau;
    phansonn.rutgon();

    while (cin>>phanso1.tu>>phanso1.mau) {
        phanso phanso1;
        cin >> phanso1.tu >> phanso1.mau;
        phanso1.rutgon();
        if (phanso1.tu * phansonn.mau < phanso1.mau * phansonn.tu)
            phansonn = phanso1;
    }

    cout << phansonn.tu << "/" << phansonn.mau;
    return 0;
}
