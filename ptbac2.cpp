#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    double a,b,c,d,e;
    cin>>a>>b>>c;
    if (a==0){
        if (b==0) cout <<"-1";
        else
        cout<< "1\n"<<fixed<<setprecision(10)<<c/-b;
    }
    else
        {
        double delta=b*b-4*a*c;
        if(delta==0) cout<<"1\n"<<fixed<<setprecision(10)<<-b/(2*a);
        else if (delta>0)
        {
            double d=(-b+ sqrt(delta))/(2*a);
            double e=(-b- sqrt(delta))/(2*a);
            if (d<e)
            cout<<"2\n"<<fixed<<setprecision(10)<<d<<endl<<fixed<<setprecision(10)<<e;
            else cout<<"2\n"<<fixed<<setprecision(10)<<e<<endl<<fixed<<setprecision(10)<<d;
        }
        else cout <<"0";
        }
    return 0;
}
