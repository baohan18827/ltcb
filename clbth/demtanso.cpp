#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[201] = {0};

    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr[x]++;
    }

    for (int i = 0; i <= 200; i++){
        if (arr[i] > 0){
            cout << i << ": " << arr[i] << endl;
        }
    }

    return 0;
}
