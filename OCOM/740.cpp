#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
long long n, dp[600];
long long jump(int now, int pre)
{
    cout << now << endl;
    if(now < 1) return 0; 
    if(now == 1) {cout << "count" << endl; return 1;}
    if(dp[now]) return dp[now];
    for(int i = now - 1; i > 0; i--)
    {
        if(i != pre)
            dp[now] += jump(now - i, i);
    }
    return dp[now];
}
int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        cout << jump(t,-1) % 99971 << endl; 

    }
    return 0;
}