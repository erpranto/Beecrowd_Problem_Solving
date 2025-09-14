#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    cin.ignore();

    while (N--) {
        string s;
        getline(cin, s);

        for (char &c : s) {
            if (isalpha(c)) c += 3;
        }

        reverse(s.begin(), s.end());

        for (int i = s.size() / 2; i < (int)s.size(); i++) {
            s[i] -= 1;
        }

        cout << s << "\n";
    }
    return 0;
}
