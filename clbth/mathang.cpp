#include <bits/stdc++.h>
using namespace std;
struct hang{
    int ms,sl,dg,tt;
};
int main (){
    int n,s=0;
    hang a[10000];
    cin>>n;
    for (int i=0;i<n;i++)
        cin>>a[i].ms>>a[i].sl>>a[i].dg;
    long long slmin=1000000000000 ;long long msmin=0;
    for (int i=0;i<n;i++)
        if (a[i].sl!=0) {
            a[i].tt=a[i].sl*a[i].dg;s+=a[i].tt;
            cout<<"("<<a[i].ms<<", "<<a[i].sl<<", "<<a[i].dg<<", "<<a[i].tt<<")"<<endl;
            if (a[i].sl<slmin) {
            slmin=a[i].sl;
            msmin=a[i].ms;
            }
        }
    cout<<"Tong gia tri tai san: "<<s<<endl;
    cout<<"Mat hang co so luong nho nhat: "<<msmin;
}

#include <bits/stdc++.h>
using namespace std;
int main (){
    long long n,a[n][3],thanhtien,sum=0,min=10000000,minms;
    cin>>n;
    for (int i=0;i<n;i++)
        for (int j=0;j<3;j++)
            cin>>a[i][j];
    for (int i=0;i<n;i++){
        if (a[i][1]!=0) {
            thanhtien=a[i][1]*a[i][2];
            sum+=thanhtien;
            if (a[i][1]<min){
            min=a[i][1];
            minms=a[i][0];
            }
            cout<<"("<<a[i][0]<<", "<<a[i][1]<<", "<<a[i][2]<<", "<<thanhtien<<")";
            cout<<endl;
        }
    }
    cout<<"Tong gia tri tai san: "<<sum<<endl;
    cout<<"Mat hang co so luong nho nhat: "<<minms;
}
