#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, L, C;
    while (cin >> N >> L >> C)
    {
        vector<string> words(N);
        for (int i = 0; i < N; i++)
        {
            cin >> words[i];
        }

        int lines = 1, pages = 1;
        int currLen = 0;
        for (int i = 0; i < N; i++)
        {
            int wordLen = (int)words[i].size();

            if (currLen == 0)
            {
                currLen = wordLen;
            }
            else if (currLen + 1 + wordLen <= C)
            {
                currLen += 1 + wordLen;
            }
            else
            {
                lines++;
                if (lines > L)
                {
                    pages++;
                    lines = 1;
                }
                currLen = wordLen;
            }
        }
        cout << pages << endl;
    }
    return 0;
}
