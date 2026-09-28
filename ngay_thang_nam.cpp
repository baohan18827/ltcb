#include <iostream>
using namespace std;
int main ()
{
    int ngay,thang,nam;
    cin >> ngay >> thang >> nam;
    if (nam>=1900)
    {
        if (nam%400==0 or (nam%4==0 and nam%100!=0))
        {
            if (thang==2)
                {
                    if (ngay<30) cout <<"YES";else cout<<"NO";
                }
            if ((thang==1)||(thang==3)||(thang==5)||(thang==7)||(thang==8)||(thang==10)||(thang==12))
                {
                    if (ngay<32) cout <<"YES";else cout<<"NO";
                }
            if ((thang==4)||(thang==6)||(thang==9)||(thang==11))
                {
                    if (ngay<31) cout <<"YES";else cout<<"NO";
                }
        }
        else
        {
            if (thang==2)
                {
                    if (ngay<29) cout <<"YES";else cout<<"NO";
                }
            if ((thang==1)||(thang==3)||(thang==5)||(thang==7)||(thang==8)||(thang==10)||(thang==12))
                {
                    if (ngay<32) cout <<"YES";else cout<<"NO";
                }
            if ((thang==4)||(thang==6)||(thang==9)||(thang==11))
                {
                    if (ngay<31) cout <<"YES";else cout<<"NO";
                }
        }
    }
    else cout << "NO";

}
