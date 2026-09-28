#include <bits/stdc++.h>
using namespace std;
int main () {
    int a;
    cin>>a;
    bool snt=true;
    if (a<2)
        cout<<"false";
    else {
        for (int i=2;i<a;i++) {
            if (a%i==0) {
                snt=false;
                break;
            }
        }
        if (snt) cout<<"true";
        else cout<<"false";
    }
    return 0;
}
