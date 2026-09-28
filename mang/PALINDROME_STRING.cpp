#include <bits/stdc++.h>
using namespace std;
int main() {
    string a;
    cin>>a;
    for (int i=0; i < a.length()/2;i++) {
        if (a[i] != a[a.length() - 1 - i]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
