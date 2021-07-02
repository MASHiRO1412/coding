#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int n, m;
int dp[300][300], p[300][300];
int fruit(int x, int y)
{
    if(x < 0 or y < 0 or x > n - 1 or y > m - 1) return 0;
    if(dp[x][y]) return dp[x][y];
    dp[x][y] = INT_MIN;
    return dp[x][y] = max(p[x][y] + fruit(x + 1, y), p[x][y] + fruit(x, y + 1));
}
int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> p[i][j];
    cout << fruit(0, 0);
    return 0;
}