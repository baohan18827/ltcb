#include <bits/stdc++.h>
using namespace std;
struct ps{
   int tu,mau;
};
   void nhap (ps a[100],int n){
       for (int i=0;i<n;i++)
        cin>>a[i].tu>>a[i].mau;
   }

   void xuat (ps a[100],int n){
       for (int i=n-1;i>=0;i--)
        cout<<a[i].tu<<"/"<<a[i].mau<<" ";
        cout<<endl;
   }
   void ss (ps a[100],int n){
       ps tm,mm;
       tm.tu=a[0].tu;tm.mau=a[0].mau; int s=a[0].tu;
       mm.tu=a[0].tu;mm.mau=a[0].mau;int t=a[0].mau;
        for (int i=0;i<n;i++) {
                if (a[i].tu<s) {
                   s=a[i].tu;
                   tm.tu=a[i].tu;tm.mau=a[i].mau;
                }
                if (a[i].mau>t) {
                    t=a[i].mau;
                   mm.tu=a[i].tu;mm.mau=a[i].mau;
                }
            }
        cout<<tm.tu<<"/"<<tm.mau<<" "<<mm.tu<<"/"<<mm.mau<<endl;
   }
    int snt (ps a[100],int n){
        int dem=0;
        for (int i=0;i<n;i++) {
            bool check=true;
            if (a[i].tu<2) check=false;
            else
            for (int j=2;j*j<=a[i].tu;j++)
                if (a[i].tu%j==0) check=false;
            if (check) dem++;
        }
        return dem;
    }
    int ucln(int a,int b){
        while (b!=0){
            int r=a%b;
            a=b;
            b=r;
        }
        return a;
    }
    int ntcn (ps a[100],int n){
        int dem=0;
        for (int i=0;i<n;i++)
            if (ucln(a[i].tu,a[i].mau)==1) dem++;
        return dem;
    }
int main (){
    ps a[100];
    int n;cin>>n;
    nhap(a,n);
    xuat(a,n);
    ss(a,n);
    cout<<snt(a,n)<<endl;
    cout<<ntcn(a,n);
}
