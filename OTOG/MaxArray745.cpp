#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }

int n, q, ma = INT_MIN, mf;

vector<long long> v;

int main()
{
    n = input();
    for (int i = 0; i < n; i++)
    {
        int t = input();
        if (t > ma)
        {
            ma = t;
            mf = 1;
        }
        else if(t == ma) mf++;
    }
    cout << mf;
    return 0;
}