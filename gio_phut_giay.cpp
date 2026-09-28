#include <iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cin >>a>>b>>c;
    if (  a>=0 and a<24 and b>=0 and b<60 and c>=0 and c<60)
    {
        cout << "YES\n";
        if (c==59)
        {
            if (b==59)
            {
                if (a<23)
                {
                    cout << a+1 << ":0:0";
                }
                else cout << "0:0:0";
            }
            else
            {
                cout << a<<":"<<b+1<<":0";
            }
        }
        else if (b<60)
        {
            cout <<a<<":"<<b<<":"<<c+1;
        }
    }
    else cout << "NO";
}
