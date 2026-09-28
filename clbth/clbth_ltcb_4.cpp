#include <bits/stdc++.h>
using namespace std;

int main () {
    int x, tong=0;
    cin >> x;
    if (x>=1 && x<=50){
        tong+=x*1678;
    } else if (x>50 && x<=100){
        tong+=50*1678+(x-50)*1734;
    } else if (x>100 && x<=200){
        tong+=50*1678+ 50*1734 + (x-100)*2014;
    } else if (x>200 && x<=300) {
        tong+=50*1678+ 50*1734 + 100*2014 + (x-200)*2536;
    } else if (x>300 && x<=400) {
        tong+=50*1678+ 50*1734 + 100*2014 + 100*2536 + (x-300)*2834;
    } else {
        tong+=50*1678+ 50*1734 + 100*2014 + 100*2536 + 100*2834 + (x-400)*2937;
    }
    cout << tong;
}
