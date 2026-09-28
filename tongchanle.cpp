#include <iostream>
using namespace std;
int main ()
{
    int n,i,c,l,sc,sl;
    cin>>n;
    i=1;c=0;l=0;sc=0;sl=0;
    while (i<=n) {
            if (i%2==0) {
                c++;
                sc+=i;
            }
            else {
                l++;
                sl+=i;
            }
            i++;

    }
    cout <<"Co "<<c<<" so chan\n";
    cout<<"Tong cac so chan:"<<sc<<endl;
    cout <<"Co "<<l<<" so le\n";
    cout<<"Tong cac so le:"<<sl;
}
