#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (N--)
    {
        string s;
        getline(cin, s);

        int n = s.size();
        int mid = n / 2;

        string left = s.substr(0, mid);
        string right = s.substr(mid);

        reverse(left.begin(), left.end());
        reverse(right.begin(), right.end());

        cout << left + right << "\n";
    }
    return 0;
}
