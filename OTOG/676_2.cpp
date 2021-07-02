#include <bits/stdc++.h>
#define endl "\n"
#define all(x) (x).begin(), end()
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int n;
int mp[10005][3];
long long dp[10005][3];
int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < 3; j++)
        {
            cin >> mp[i][j];
            if(i == 0) {dp[i][j] = mp[i][j]; continue;}
            if(j == 0) dp[i][j] = mp[i][j] + max(dp[i - 1][0], dp[i - 1][1]);
            if(j == 2) dp[i][j] = mp[i][j] + max(dp[i - 1][1], dp[i - 1][2]);
            if(j == 1) dp[i][j] = mp[i][j] + max(dp[i - 1][0], max(dp[i - 1][1], dp[i - 1][2]));
        }
    cout << max(dp[n - 1][0], max(dp[n - 1][1], dp[n - 1][2]));
    return 0;
}