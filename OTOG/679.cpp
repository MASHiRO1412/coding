#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int n, m, sx, sy, tx, ty;
bool flag[1000][1000];
string mp[1000];
int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mp[i][j];
    cin >> sx >> sy >> tx >> ty;
    return 0;
}