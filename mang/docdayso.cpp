#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[1000];
    long n = 0, s = 0;

    while (cin >> a[n]) {
        s += a[n];
        n++;
    }

    if (n < 3)
        cout << "NO";
     else {
        cout << n<<endl<<s<<endl;
        for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
                swap(a[i], a[j]);

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
    }
}
