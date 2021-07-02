#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }

int n, m, q, a[1001][1001];
long long ans[9];
vector<pair<int,int>> p;


int xx[3] = {-1, 0, 1};
int yy[3] = {-1, 0, 1};

int main()
{
    cin >> n >> m >> q;
    ans[0] += (n * m) - q;
    for(int i = 0; i < q; i++)
    {
        int x,y;
        cin >> x >> y;
        x = x - 1;
        y = y - 1;
        p.push_back({x,y});
        for(int j = 0; j < 3; j++)
        {
            for(int k = 0; k < 3; k++)
            {
                if (x + xx[j] < 0 || y + yy[k] < 0 || y + yy[k] > m - 1 || x + xx[j] > n - 1) continue;
                else
                {
                    ans[a[x + xx[j]][y + yy[k]]]--;
                    a[x + xx[j]][y + yy[k]]++;
                    ans[a[x + xx[j]][y + yy[k]]]++;
                }
            }
        }
    }
    for(int i = 0; i < p.size(); i++)
    {
        if (a[p[i].first][p[i].second] > 0)
        {
            ans[a[p[i].first][p[i].second]]--;
            ans[0]++;
        }
    }
    for(int i = 0; i < 9; i++)
    {
        cout << i << " " << ans[i] << endl;
    }
    return 0;
}
