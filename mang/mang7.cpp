#include <iostream>
using namespace std;
int main () {
    int n;int a[100][100];
    cin>>n;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            cin>>a[i][j];
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            if (i==j) cout<<a[i][j]<<" ";
}
