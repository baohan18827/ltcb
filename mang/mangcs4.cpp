#include <iostream>
using namespace std;
int main () {
    int a,b,dem;dem=1;int n[100][100];
    cin>>a>>b;
    for (int i=1;i<=a;i++)
         for (int j=1;j<=b;j++)
            cin>>n[i][j];
    for (int i=1;i<=a;i++) {
        if (i%2==0)
            for (int j=b;j>=1;j--) {
                n[i][j]=dem;
                dem++;
            }
        else
            for (int j=1;j<=b;j++) {
                n[i][j]=dem;
                dem++;
            }
    }
    for (int i=1;i<=a;i++) {
         for (int j=1;j<=b;j++)
            cout<<n[i][j]<<" ";
        cout<<endl;
    }
}

