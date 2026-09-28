#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    for (char c : a) {
            if (isdigit(c)) {
                int s=c-'0';
                if (s%2==0)
                cout<<c<<" ";
                }
    }
    return 0;

}
