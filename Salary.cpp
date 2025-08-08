#include <bits/stdc++.h>
using namespace std;
int main()
{
    int emp, hr;
    double sal;
    cin>>emp>>hr>>sal;
    double sallary = sal * hr;
    cout << "NUMBER = " << emp << endl;
    cout << fixed << setprecision(2);
    cout<< "SALARY = U$ " << sallary << endl;
    return 0;
}