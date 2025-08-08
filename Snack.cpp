#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a>> b;
    double p;
    if (a == 1)
        p = 4.00;
    else if (a == 2)
        p = 4.50;
    else if (a == 3)
        p = 5.00;
    else if (a == 4)
        p = 2.00;
    else if (a == 5)
        p = 1.50;
    cout<<fixed<<setprecision(2);
    cout<<"Total: R$ "<<b*p<<endl;
    return 0;
}