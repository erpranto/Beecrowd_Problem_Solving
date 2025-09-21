#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        int N;
        cin >> N;
        if (N == 0)
            break;

        vector<string> strs(N);
        for (int i = 0; i < N; i++)
            cin >> strs[i];

        sort(strs.begin(), strs.end(), [](const string &a, const string &b)
             { return a.size() < b.size(); });

        vector<int> dp(N, 1);
        int ans = 1;

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (strs[i].find(strs[j]) != string::npos)
                {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            ans = max(ans, dp[i]);
        }

        cout << ans << "\n";
    }
    return 0;
}
