#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double b4ac = b * b - 4 * a * c;
    if (a == 0 || b4ac < 0)
    {
        cout << "Impossivel calcular" << endl;
    }
    else
    {
        double r1 = (-b + sqrt(b4ac)) / (2 * a);
        double r2 = (-b - sqrt(b4ac)) / (2 * a);
        cout << fixed << setprecision(5);
        cout << "R1 = " << r1 << endl
             << "R2 = " << r2 << endl;
    }
    return 0;
}