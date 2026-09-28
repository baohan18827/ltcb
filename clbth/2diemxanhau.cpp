#include <bits/stdc++.h>
using namespace std;
struct diem{
    int x,y;
};
int main (){
    int n; diem a[1000],ma,mb;
    cin>>n;
    for (int i=0;i<n;i++)
        cin>>a[i].x>>a[i].y;
    int mx=pow((a[0].x-a[1].x),2)+pow((a[0].y-a[1].y),2);
    ma.x=a[0].x;ma.y=a[0].y;mb.x=a[1].x;mb.y=a[1].y;
    for (int i=0;i<n;i++)
        for (int j=i+1;j<n;j++) {
            int c=pow((a[i].x-a[j].x),2)+pow((a[i].y-a[j].y),2);
            if (mx<c) {
                mx=c;
                ma.x=a[i].x;ma.y=a[i].y;
                mb.x=a[j].x;mb.y=a[j].y;
            }
        }
    cout<<"("<<ma.x<<", "<<ma.y<<") ("<<mb.x<<", "<<mb.y<<")"<<endl;
    cout<<fixed<<setprecision(4)<<sqrt(mx);

}
