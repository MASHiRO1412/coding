#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int n, m, x, y;
char g[60][60];
bool flag[60][60] = {false};
queue<pair<int,int>> q;
vector<char> v;
int main()
{
    cin >> m >> n >> y >> x;
    for (int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> g[i][j];
    flag[x][y] = true;
    q.push({x, y});
    while(!q.empty())
    {
        pair<int, int> now = q.front();
        q.pop();
        if (g[now.first][now.second] >= 'A' and g[now.first][now.second] <= 'Z')
        {
            v.push_back(g[now.first][now.second]); 
            break;
        }
        else
            for (int xx : {-1, 0, 1})
                for (int yy : {-1, 0, 1})
                    if (xx != yy and now.first + xx >= 0 and now.first + xx <= n and now.second >= 0 and now.second <= m)
                        if (g[now.first + xx][now.second + yy] != '1' && !flag[now.first + xx][now.second + yy])
                        {
                            flag[now.first + xx][now.second + yy] = true;
                            q.push({now.first + xx, now.second + yy});
                        }
    }
    while (!q.empty())
    {
        pair<int, int> now = q.front();
        q.pop();
        if (g[now.first][now.second] >= 'A' and g[now.first][now.second] <= 'Z')
            v.push_back(g[now.first][now.second]);
    }
    sort(v.begin(), v.end());
    for(auto e : v) cout << e << endl;
    return 0;
}