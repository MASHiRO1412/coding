#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int n, m, startx, starty, stopx, stopy;
int dp[30][30], flag[30][30];
char p[30][30];
int room(int x, int y)
{
    if(x < 0 or y < 0 or x > n - 1 or y > m - 1 or flag[x][y] or p[x][y] == 'E') return 0;
    if(dp[x][y]) return dp[x][y];
    dp[x][y] = INT_MIN;
    if(p[x][y] == 'S')
    {
        cout << 'S' << endl;
        flag[x][y]++;
        dp[x][y] = max(room(x - 1, y), room(x + 1, y));
        dp[x][y] = max(dp[x][y], max(room(x, y - 1), room(x, y + 1)));
        flag[x][y]--;
    }
    else if(p[x][y] == '*')
    {
        cout << '*' << endl;
        flag[x][y]++;
        dp[x][y] = max(room(x - 1, y), room(x + 1, y));
        dp[x][y] = max(dp[x][y], max(room(x, y - 1), room(x, y + 1)));
        dp[x][y]++;
        flag[x][y]--;
    }
    else if(p[x][y] == 'X')
    {
        cout << 'X' << endl;
        flag[x][y]++;
        dp[x][y] = max(room(x - 1, y), room(x + 1, y));
        dp[x][y] = max(dp[x][y], max(room(x, y - 1), room(x, y + 1)));
        dp[x][y]--;
        flag[x][y]--;
    }
    return dp[x][y];
}
int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> p[i][j];
            if(p[i][j] == 'S') 
            {
                startx = i;
                starty = j;
            }
        }
    cout << room(startx, starty) + 3;
    return 0;
}