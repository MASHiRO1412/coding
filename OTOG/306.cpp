#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int n;
int v[100010];
int dp[100010];
int k(int x)
{
    if (x > n) return 0;
    if (dp[x]) return dp[x];
    else return dp[x] = max(k(x + 1), v[x] + k(x + 2));
}
int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << k(0);
    return 0;
}