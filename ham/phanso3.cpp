#include <iostream>
using namespace std;

struct ps {
    int tu, mau;

    int ucln(int a, int b) {
        while (b != 0) {
            int r = a % b;
            a = b;
            b = r;
        }
        return a;
    }

    void rg() {
        int d = ucln(tu, mau);
        tu /= d;
        mau /= d;
        if (mau < 0) { // giữ mẫu dương
            tu = -tu;
            mau = -mau;
        }
    }
};

int main() {
    ps p;
    cin >> p.tu >> p.mau;

    ps p1;
    while (cin >> p1.tu >> p1.mau) {
        p.tu = p.tu * p1.mau + p.mau * p1.tu;
        p.mau = p.mau * p1.mau;
    }

    p.rg(); // rút gọn kết quả cuối
    cout << p.tu << "/" << p.mau;
    return 0;
}
