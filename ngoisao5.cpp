#include <iostream>
using namespace std;
int main(){
    int h;
    cin >> h;
    for (int i=h;i>=1;i--){
        for (int j=1;j<=h*2-1;j++){
            if ((j>=h-i+1)&&(j<=h+i-1))
                cout<<"*";
            else
                cout<<" ";
        }
        if (i>1) cout<<endl;
    }
}
