#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    cout << fixed << setprecision(1) << (a + b + c) * 1.0 / (d + e + f);
    return 0;
}
