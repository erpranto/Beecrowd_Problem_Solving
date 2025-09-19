#include <bits/stdc++.h>
using namespace std;

int main() {
    int h1, m1, h2, m2;
    cin >> h1 >> m1 >> h2 >> m2;

    int start = h1 * 60 + m1;
    int end = h2 * 60 + m2;

    if (end <= start) {
        end += 24 * 60;
    }

    int duration = end - start;
    int hours = duration / 60;
    int minutes = duration % 60;

    cout << "O JOGO DUROU " << hours << " HORA(S) E " << minutes << " MINUTO(S)" << endl;
    return 0;
}
