#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int arr[3] = {a, b, c};

    int sortedArr[3] = {a, b, c};
    sort(sortedArr, sortedArr + 3);

    for (int i = 0; i < 3; i++)
        cout << sortedArr[i] << endl;

    cout << endl;

    cout << a << endl
         << b << endl
         << c << endl;

    return 0;
}
