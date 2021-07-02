#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int hh, mm;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int main()
{
    hh = input(); mm = input();
    int nm = mm - 45;
    if(nm < 0)
    {
        nm = nm + 60;
        hh--;
    }
    if(hh < 0)
        hh = hh + 24;
    cout << hh << " " << nm;
    return 0;
}