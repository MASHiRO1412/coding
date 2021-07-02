#include <bits/stdc++.h>

using namespace std;

int n, nq;

vector<int> v;

template <typename T = int>
T input()
{
    return *istream_iterator<T>(cin);
}

int main()
{
    int hh = input(); int mm = input();
    int p = input();
    int nh = hh + (p / 60);
    int nm = mm + (p % 60);
    if(nm >= 60) 
    {
        nh++;
        nm -= 60;
    }
    if(nh >= 24) nh -= 24;
    cout << std::setfill('0') << std::setw(2) << nh << " " << std::setfill('0') << std::setw(2) << nm; 
    return 0;
}