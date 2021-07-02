#include <bits/stdc++.h>
#define endl "\n"
#define all(x) (x).begin(), (x).end()
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int n, poison, dp[10005][105];
vector<int> v;
int ch(int now, int np, bool skip)
{
    if(now >= n or np < 0) return 0;
    if(dp[now][np]) return dp[now][np];
    dp[now][np] = INT_MIN;
    if(np) dp[now][np] = v[now] + ch(now + 1, np - 1, true);
    if(skip) dp[now][np] = max(v[now] + ch(now + 2, np, false), dp[now][np]);
    else dp[now][np] = max(ch(now + 1, np, false), max(v[now] + ch(now + 2, np, false), dp[now][np]));
    return dp[now][np];
}
int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> poison;
    for(int i = 0; i < n; i++) v.push_back(input());
    cout << ch(0, poison, false) << endl;
    return 0;
}