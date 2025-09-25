#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    while (getline(cin, line))
    {
        bool upper = true;
        for (char &c : line)
        {
            if (isalpha(c))
            {
                if (upper)
                    c = toupper(c);
                else
                    c = tolower(c);
                upper = !upper;
            }
        }
        cout << line << "\n";
    }
    return 0;
}
