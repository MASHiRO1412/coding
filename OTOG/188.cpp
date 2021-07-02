#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int n;
long long dp[50], p[50];
int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    dp[0] = 1;
    p[0] = 1;
    for(int i = 1; i <= n; i++)
    {
        p[i] = (p[i - 1] * 3) - 1;
        dp[i] = dp[i - 1] + p[i];
    }
    cout << dp[n];
    return 0;
}