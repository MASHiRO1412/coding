#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int n;
deque<int> v;
long long dp[105];
long long nd(int x);
long long st(int x)
{
    int f = v.front(), b = v.back();
    if(dp[x]) return dp[x];
    dp[x] = INT_MIN;
    v.pop_front();
    dp[x] = f + nd(x);
    v.push_front(f);
    v.pop_back();
    dp[x] = max(dp[x], b + nd(x));
    v.push_back(b);
    return dp[x];
}
long long nd(int x)
{
    int f = v.front(), b = v.back();
    v.pop_front();
    dp[x] = f + st(x + 1);
    v.push_front(f);
    v.pop_back();
    dp[x] = max(dp[x], b + st(x + 1));
    v.push_back(b);
    return dp[x];
}
int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n * 2; i++)
        v.push_back(input());
    cout << max(st(0), st(n * 2 - 1));
    return 0;
}