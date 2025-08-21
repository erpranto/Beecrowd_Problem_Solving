#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    vector<double> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.rbegin(), v.rend());
    a = v[0];
    b = v[1];
    c = v[2];
    if (a >= b + c)
        cout << "NAO FORMA TRIANGULO" << endl;
    else
    {
        if (fabs(a * a - (b * b + c * c)) < 1e-9)
            cout << "TRIANGULO RETANGULO" << endl;
        else if (a * a > b * b + c * c)
            cout << "TRIANGULO OBTUSANGULO" << endl;
        else if (a * a < b * b + c * c)
            cout << "TRIANGULO ACUTANGULO" << endl;
        if (fabs(a - b) < 1e-9 && fabs(b - c) < 1e-9)
            cout << "TRIANGULO EQUILATERO" << endl;
        else if (fabs(a - b) < 1e-9 || fabs(b - c) < 1e-9 || fabs(a - c) < 1e-9)
            cout << "TRIANGULO ISOSCELES" << endl;
    }
    return 0;
}