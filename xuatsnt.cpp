#include <iostream>
using namespace std;
int main() {
    int n,dem;bool snt;snt=false;
    cin>>n;
    for (int i=1;i<=n;i++) {
            int dem=0;
        for (int j=1;j<=i;j++)
            if (i%j==0)
                dem++;
        if (dem==2)
        {
            cout<<i<<" ";snt=true;
        }
    }
    if (!snt) cout<<"-1";

}
