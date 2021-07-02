#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
/*template <typename T = int>
T input() { return *istream_iterator<T>(cin); }*/
int nnode, nedge;
bool inTree[100];
long long dist[105];
int g[105][105];
int mincost;
int p[105];
int main()
{
    ios::sync_with_stdio(false);
    cin >> nnode >> nedge;
    for (int i = 0; i < 100; i++)
    {
        dist[i] = INT_MAX;
        for (int j = 0; j < 100; j++)
        {
            if (i == j)g[i][j] = 0;
            else g[i][j] = INT_MAX;
        }
    }
    for (int j = 0; j < nedge; j++)
    {
        int from, to, weight;
        cin >> from >> to >> weight;
        g[from][to] = weight;
        g[to][from] = weight;
    }
    dist[0] = 0;
    for(int i = 0; i < nnode; i++)
    {
        int min = INT_MAX, min_index;
        for(int j = 0; j < nnode; j++)
            if(dist[j] < min and !inTree[j])
            {
                min = dist[j];
                min_index = j;
            }
        inTree[min_index] = true;
        mincost += min;
        for(int j = 0; j < nnode; j++) 
        {
            if(!inTree[j] and dist[j] > g[min_index][j]) 
            {
                dist[j] = g[min_index][j]; 
                p[j] = min_index;
            }
        }
    }
    cout << mincost;
    return 0;
}