#include <bits/stdc++.h>
using namespace std;
int main()
{
    int leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int n;
    cin >> n;
    while (n--)
    {
        string value;
        cin >> value;
        int total = 0;
        for (char c : value)
        {
            total += leds[c - '0'];
        }
        cout << total << " leds\n";
    }
    return 0;
}
