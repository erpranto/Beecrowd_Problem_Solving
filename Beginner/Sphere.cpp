#include <bits/stdc++.h>
using namespace std;
int main()
{
    int R;
    cin >> R;
    double pi = 3.14159;
    double res = (4.0 / 3) * pi * R * R * R;
    cout << fixed << setprecision(3);
    cout << "VOLUME = " << res << endl;
    return 0;
}