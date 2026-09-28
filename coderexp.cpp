#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cin >>a>>b>>c>>d;
    e=a*10+b*20+c*30+d*40;
    cout <<e<<endl;
    if (e==0) cout <<"Coder So Sinh";
    else if (e>=1 and e<=49) cout <<"Coder Lop Mam";
    else if (e>=50 and e<=99) cout <<"Coder Lop Choi";
    else if (e>=100 and e<=499) cout <<"Coder Lop La";
    else if (e>=500 and e<=999) cout <<"Coder Tieu Hoc";
    else if (e>=1000 and e<=1499) cout <<"Coder THCS";
    else if (e>=1500 and e<=1999) cout <<"Coder THPT";
    else if (e>=2000 and e<=2499) cout <<"Coder Trung Cap";
    else if (e>=2500 and e<=3499) cout <<"Coder Cao Dang";
    else if (e>=3500 and e<=4199) cout <<"Coder Dai Hoc";
    else if (e>=4200 and e<=5499) cout <<"Coder Thac Si";
    else if (e>=5500 and e<=6999) cout <<"Coder Tien Si";
    else if (e>=7000) cout <<"Coder Giao Su";
}
