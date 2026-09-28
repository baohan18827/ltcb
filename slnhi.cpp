
#include <iostream>
using namespace std;
int main(){
    int a,b,c,d,max;
    cin>>a>>b>>c>>d;
    max=a;
    if(b>max)
    {
        max=b;
    }
    if(c>max)
    {
        max=c;
    }
    if(d>max)
    {
        max=d;
    }
    if(a==max)
    {
        a=0;
    }
    if(b==max)
    {
        b=0;
    }
    if(c==max)
    {
        c=0;
    }
    if(d==max)
    {
        d=0;
    }
    max=a;
    if(b>max)
    {
        max=b;
    }
    if(c>max)
    {
        max=c;
    }
    if(d>max)
    {
        max=d;
    }
    if(max!=0)
    {
        cout<<max;
    }
    else cout<<-1;
    return 0;
}
