#include<iostream>
using namespace std;
int main()
{
    long int t,p,c;
    cin >>t>>p>>c;
    if (t==1)
        cout <<p*c;
    else
    {
        if (p%2==0) p=p/2;
        else p=(p+1)/2;
        cout <<p*c;
    }

}
