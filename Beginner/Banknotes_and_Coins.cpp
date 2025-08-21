#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    cin >> n;
    int total = (int)(n * 100 + 0.5);

    int notes = total; 

    int hn = notes / 10000;
    notes %= 10000;
    int fif = notes / 5000;
    notes %= 5000;
    int twenty = notes / 2000;
    notes %= 2000;
    int ten = notes / 1000;
    notes %= 1000;
    int five = notes / 500;
    notes %= 500;
    int two = notes / 200;
    notes %= 200;
    int one = notes / 100;
    notes %= 100;

    int cents = notes;

    int c50 = cents / 50;
    cents %= 50;
    int c25 = cents / 25;
    cents %= 25;
    int c10 = cents / 10;
    cents %= 10;
    int c5 = cents / 5;
    cents %= 5;
    int c1 = cents;

    cout << "NOTAS:" << endl
         << hn << " nota(s) de R$ 100.00" << endl
         << fif << " nota(s) de R$ 50.00" << endl
         << twenty << " nota(s) de R$ 20.00" << endl
         << ten << " nota(s) de R$ 10.00" << endl
         << five << " nota(s) de R$ 5.00" << endl
         << two << " nota(s) de R$ 2.00" << endl
         << "MOEDAS:" << endl
         << one << " moeda(s) de R$ 1.00" << endl
         << c50 << " moeda(s) de R$ 0.50" << endl
         << c25 << " moeda(s) de R$ 0.25" << endl
         << c10 << " moeda(s) de R$ 0.10" << endl
         << c5 << " moeda(s) de R$ 0.05" << endl
         << c1 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}
