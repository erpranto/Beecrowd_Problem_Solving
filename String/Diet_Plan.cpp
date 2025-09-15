#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    if (!(cin >> T)) return 0;
    string line;
    getline(cin, line);

    auto strip_cr = [](string &s){
        if (!s.empty() && s.back() == '\r') s.pop_back();
    };

    while (T--) {
        string diet, breakfast, lunch;
        getline(cin, diet);
        getline(cin, breakfast);
        getline(cin, lunch);

        strip_cr(diet);
        strip_cr(breakfast);
        strip_cr(lunch);

        int freq[26] = {0};
        for (char c : diet) freq[c - 'A']++;

        bool cheat = false;
        for (char c : breakfast) {
            if (c < 'A' || c > 'Z' || freq[c - 'A'] == 0) { cheat = true; break; }
            freq[c - 'A']--;
        }
        if (!cheat) {
            for (char c : lunch) {
                if (c < 'A' || c > 'Z' || freq[c - 'A'] == 0) { cheat = true; break; }
                freq[c - 'A']--;
            }
        }

        if (cheat) {
            cout << "CHEATER\n";
        } else {
            string dinner;
            for (int i = 0; i < 26; ++i)
                dinner.append(freq[i], char('A' + i));
            cout << dinner << '\n';
        }
    }
    return 0;
}
