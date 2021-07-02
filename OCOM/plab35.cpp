#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
vector<pair<int, int>> v[10000];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
int dist[10000];
int nnode, nedge, start, target;
int main()
{
    ios::sync_with_stdio(false);
    cin >> nnode >> nedge >> start >> target;
    for(int i = 0; i < nedge; i++)
    {
        int t = input(), tt = input(), ttt = input();
        v[t].push_back({tt, ttt});
        v[tt].push_back({t, ttt});
    }
    for(int i = 0; i < nnode; i++) dist[i] = INT_MAX;
    dist[start] = 0;
    q.push({dist[start], start});
    while(!q.empty())
    {
        int nn = q.top().second;
        int nd = q.top().first;
        q.pop();
        for(int i = 0; i < v[nn].size(); i++)
        {
            int tn = v[nn][i].first;
            int td = v[nn][i].second;
            if(dist[tn] > dist[nn] + td)
            {
                dist[tn] = dist[nn] + td;
                q.push({dist[tn], tn});
            }
        }
    }
    cout << dist[target] << endl << dist[target] * 20;
    return 0;
}