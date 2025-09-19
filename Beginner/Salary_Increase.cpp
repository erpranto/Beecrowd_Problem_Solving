#include <bits/stdc++.h>
using namespace std;

int main() {
    double salary;
    cin >> salary;

    double rate = 0;

    if (salary <= 400.00)
        rate = 15;
    else if (salary <= 800.00)
        rate = 12;
    else if (salary <= 1200.00)
        rate = 10;
    else if (salary <= 2000.00)
        rate = 7;
    else
        rate = 4;

    double money = salary * rate / 100.0;
    double new_salary = salary + money;

    cout << fixed << setprecision(2);
    cout << "Novo salario: " << new_salary << endl;
    cout << "Reajuste ganho: " << money << endl;
    cout << "Em percentual: " << (int)rate << " %" << endl;

    return 0;
}
