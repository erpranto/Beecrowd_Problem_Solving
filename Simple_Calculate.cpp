#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sl1,sl2,u1,u2;
    double pr1,pr2;
    cin>>sl1>>u1>>pr1>>sl2>>u2>>pr2;
    double value=u1*pr1+u2*pr2;
    cout << fixed << setprecision(2);
    cout<<"VALOR A PAGAR: R$ "<<value<<endl;
    return 0;
}