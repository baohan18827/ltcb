#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int a[100][100];
    int top = 1, bottom = N;
    int left = 1, right = M;
    int num = 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) { a[top][i] = num; num ++;}
        top++;
        for (int i = top; i <= bottom; i++) a[i][right] = num++;
        right--;
        for (int i = right; i >= left; i--) a[bottom][i] = num++;
        bottom--;
        for (int i = bottom; i >= top; i--) a[i][left] = num++;
        left++;
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}
