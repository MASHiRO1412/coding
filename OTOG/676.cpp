#include <bits/stdc++.h>
#define endl "\n"
#define all(x) (x).begin(), end()
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int n;
int mp[10005][3];
long long dp[10005][3];
long long move(int x, int y)
{
    if(x > n - 1) return 0;
    if(dp[x][y]) return dp[x][y];
    dp[x][y] = INT_MIN;
    for(int i = 0; i < 3 ; i++)
    {
        if((y == 0 and i == 2) or (y == 2 and i == 0)) continue;
        dp[x][y] = max(dp[x][y], mp[x][y] + move(x + 1, i));
    }
    return dp[x][y];
}
int main()
{
    ios::sync_with_stdio(false);
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d %d %d", &mp[i][0], &mp[i][1], &mp[i][2]);
    long long ans = max(max(move(0, 1), move(0, 0)), move(0, 2));
    printf("%lld", ans);
    return 0;
}