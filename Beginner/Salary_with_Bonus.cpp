#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    double sal, val;
    cin >> sal;
    cin >> val;
    double t = sal + (val * 0.15);
    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << t << endl;
    return 0;
}