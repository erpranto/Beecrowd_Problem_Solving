#include <bits/stdc++.h>
using namespace std;
int main()
{
    int day;
    cin >> day;
    int year = day / 365;
    day = day % 365;
    int mon = day / 30;
    day = day % 30;
    cout << year << " ano(s)" << endl
         << mon << " mes(es)" << endl
         << day << " dia(s)" << endl;

    return 0;
}