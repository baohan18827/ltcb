#include <bits/stdc++.h>
using namespace std;

bool cp(int x);
bool nt(int x);

int main() {
    int n;
    int a[100];

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];


    for (int i = 0; i < n; i++)
        if (cp(a[i])) cout << a[i] << " ";
    cout << endl;


    for (int i = 0; i < n; i++)
        if (nt(a[i])) cout << a[i] << " ";
    cout << endl;
}


bool cp(int x) {
    int s = sqrt(x);
    if (s * s == x)
        return true;
    else
        return false;
}


bool nt(int x) {
    int dem = 0;
    for (int i = 1; i <= x; i++)
        if (x % i == 0) dem++;
    if (dem == 2) return true;
    else return false;
}
