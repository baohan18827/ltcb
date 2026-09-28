#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[1000], b[1000];

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int j = 0; j < m; j++) cin >> b[j];

    int i=0, j=0;
    while(i<n && j<m) {
        if(a[i]<=b[j]) cout << a[i++] << " ";
        else cout << b[j++] << " ";
    }
    while(i<n) cout << a[i++] << " ";
    while(j<m) cout << b[j++] << " ";

    return 0;
}
