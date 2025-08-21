#include <bits/stdc++.h>
using namespace std;
int main()
{
    double A, B, C, pi = 3.14159;
    cin >> A >> B >> C;
    cout << fixed << setprecision(3);
    double triangle = (A * C) / 2.0;
    double circle = pi * C * C;
    double trapezium = ((A + B) * C) / 2.0;
    double square = B * B;
    double rectangle = A * B;
    cout << "TRIANGULO: " << triangle << endl
         << "CIRCULO: " << circle << endl
         << "TRAPEZIO: " << trapezium << endl
         << "QUADRADO: " << square << endl
         << "RETANGULO: " << rectangle << endl;
    return 0;
}