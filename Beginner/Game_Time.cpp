#include <bits/stdc++.h>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    int duration;
    if (start < end) {
        duration = end - start;
    } else if (start > end) {
        duration = (24 - start) + end;
    } else {
        duration = 24;
    }

    cout << "O JOGO DUROU " << duration << " HORA(S)" << endl;
    return 0;
}
