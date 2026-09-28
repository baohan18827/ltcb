#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int tong = 0;
        int t = n;
        while (t > 0) {
            int so = t % 10;
            if (so == 2 || so == 3 || so == 5 || so == 7)
                tong += so;
            t /= 10;
        }
        cout << tong << endl;
    }
    return 0;
}
