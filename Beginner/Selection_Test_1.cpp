#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int sum1 = a + b, sum2 = c + d;
    if (b > c && d > a && sum2 > sum1 && c >= 0 && d >= 0 && a % 2 == 0)
        cout << "Valores aceitos" << endl;
    else
        cout << "Valores nao aceitos" << endl;
    return 0;
}