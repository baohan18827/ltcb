#include <bits/stdc++.h>
using namespace std;
int main () {
    int a[26];
    for (int i=(int)'a';i<=(int)'z';i++)
        a[i]=0;
    char x;
    while (cin>>x)
        a[int(x)]++;
    for (int i=(int)'a';i<=(int)'z';i++)
        if (a[i]!=0)
            cout<<char(i)<<":"<<a[i]<<endl;
}

