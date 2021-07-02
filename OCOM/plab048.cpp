#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
long long n, dp[100000], money, coin[100000];
int main()
{
    ios::sync_with_stdio(false);
    cin >> money >> n;
    for(int i = 0; i < n; i++)
        cin >> coin[i];
    dp[0] = 1;
    for (long long i = 0; i < n; i++)
        for (long long j = 0; j <= money; j++)
            dp[j + coin[i]] += dp[j];
    cout << dp[money];
    return 0;
}