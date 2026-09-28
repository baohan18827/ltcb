#include <iostream>
using namespace std;
int main(){
    int m,n,max;
    int a[100][100];
    cin>>n>>m;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            cin>>a[i][j];
    max=a[1][1];
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
                if (max<a[i][j])
                    max=a[i][j];
    cout<<max;
}
