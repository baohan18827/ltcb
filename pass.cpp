#include <iostream>
using namespace std;
int main ()
{
    string a;
    do {
        cout<<"Nhap mat khau:";
        cin>>a;
        if (a=="1234")
           break;
        else cout<<"Sai mat khau\n";
        }
    while (a!="1234");
}
