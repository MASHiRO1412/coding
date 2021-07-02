#include <bits/stdc++.h>
#define endl "\n"
#define all(x) (x).begin(), end()
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int n, money;
int v[25];
long long dp[10010];
long long k(int now_money)
{
    if(now_money < 0) return INT_MAX;
    if(now_money == 0) return dp[now_money];
    if(dp[now_money]) return dp[now_money];
    dp[now_money] = INT_MAX;
    for(int i = 0; i < n; i++)
        dp[now_money] = min(dp[now_money], k(now_money - v[i]) + 1);
    return dp[now_money];
}
int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> money;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << k(money);
    return 0;
}