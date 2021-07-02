#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }

int n, q, sum;

vector<long long> v;

int main()
{
    for(int i = 0; i < LONG_LONG_MAX; i++)
    {
        int t = input();
        if(t == -1) break;
        v.push_back(t);
    }
    for (int i = 0; i < LONG_LONG_MAX; i++)
    {
        int t = input();
        if(t == -1) break;
        cout << v[t - 1] << endl;
    }
    return 0;
}