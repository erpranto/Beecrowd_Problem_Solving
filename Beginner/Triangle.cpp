#include <bits/stdc++.h>
using namespace std;
int main()
{
    double A, B, C;
    cin >> A >> B >> C;
    cout << fixed << setprecision(1);
    if ((A < B + C) && (B < A + C) && (C < A + B))
    {
        double perimeter = A + B + C;
        cout << "Perimetro = " << perimeter << endl;
    }
    else
    {
        double area = ((A + B) * C) / 2.0;
        cout << "Area = " << area << endl;
    }
    return 0;
}