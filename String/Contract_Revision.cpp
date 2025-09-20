#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    char D;
    while (cin >> D >> N) {
        if (D == '0' && N == "0") break;

        string result = "";
        for (char c : N) {
            if (c != D) result += c;
        }

        int i = 0;
        while (i < result.size() && result[i] == '0') i++;
        result = result.substr(i);

        if (result.empty()) cout << "0\n";
        else cout << result << "\n";
    }
    return 0;
}
