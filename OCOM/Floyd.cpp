#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int nnode, nedge, sx, sy, tx, ty;
bool flag[1000][1000];
int dist[100][100];
int g[100][100];
int main()
{
    ios::sync_with_stdio(false);
    cin >> nnode >> nedge;
    for(int i = 0; i < 100; i++)
        for(int j = 0; j < 100; j++)
        {
            if(i == j) dist[i][j] = 0;
            else dist[i][j] = 999;
        }
    for (int j = 0; j < nedge; j++)
    {
        int from, to, weight;
        cin >> from >> to >> weight;
        dist[from][to] = weight;
        dist[to][from] = weight;
    }
    for(int i = 0; i < nnode; i++)
        for(int j = 0; j < nnode; j++)
            for(int k = 0; k < nnode; k++)
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
    for(int i = 0; i < nnode; i++)
    {
        for(int j = 0; j < nnode; j++)
            cout << dist[i][j] << " ";
        cout << endl;
    }
    return 0;
}