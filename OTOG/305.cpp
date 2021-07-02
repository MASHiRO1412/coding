#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
string a, b;
int dp[600][600];
int LCS(int ia, int ib)
{
    if(ia < 0 or ib < 0) return 0;
    if(dp[ia][ib]) return dp[ia][ib];
    dp[ia][ib] = INT_MIN;
    if(a[ia] == b[ib])
        dp[ia][ib] = max(dp[ia][ib], (LCS(ia - 1, ib - 1)) + 1);
    else 
    {
        dp[ia][ib] = max(dp[ia][ib], (LCS(ia - 1, ib)));
        dp[ia][ib] = max(dp[ia][ib], (LCS(ia, ib - 1)));
    }
    return dp[ia][ib];
}
int main()
{
    ios::sync_with_stdio(false);
    cin >> a >> b;
    cout << LCS(a.size() - 1, b.size() - 1);
    return 0;
}