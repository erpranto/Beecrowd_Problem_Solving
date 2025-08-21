#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sec;
    cin>>sec;
    int hr=sec/3600;
    sec=sec%3600;
    int min=sec/60;
    sec=sec%60;
    cout<<hr<<":"<<min<<":"<<sec<<endl;
    return 0;
}