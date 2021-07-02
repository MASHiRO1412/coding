#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int nnode, nedge, g[16][16]; 
long long dist[16], mst;
bool tree[16];
int main()
{
    ios::sync_with_stdio(false);
    cin >> nnode >> nedge;
    for(int i = 0; i < nnode; i++)
    {
        dist[i] = INT_MAX;
        for(int j = 0; j < nnode; j++)
        {
            if(i == j) g[i][j] = 0;
            else g[i][j] = INT_MAX;
        }
    }
    for(int i = 0; i < nedge; i++)
    {
        int t, tt, ttt;
        cin >> t >> tt >> ttt;
        g[t][tt] = ttt;
        g[tt][t] = ttt;
    }
    dist[0] = 0;
    for(int i = 0; i < nnode; i++)
    {
        int min = INT_MAX, mini;
        for(int j = 0; j < nnode; j++)
        {
            if(dist[j] < min && !tree[j])
            {
                min = dist[j];
                mini = j;
            }
        }
        tree[mini] = true;
        cout << mini << endl;
        mst += min;
        for(int j = 0; j < nnode; j++)
        {
            if(!tree[j] && dist[j] > g[mini][j])
            {
                dist[j] = g[mini][j];
            }
        }
    }
    cout << mst << endl << mst * 100;
    return 0;
}