#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
struct node{int to, w;};
int nnode, nedge, start, target;
vector<node> v[100];
int parent[100];
stack<int> path;
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
int dist[100];
int main()
{
    ios::sync_with_stdio(false);
    cin >> nnode >> nedge >> start >> target;
    for(int i = 0; i < nedge; i++)
    {
        int from, to, weight; cin >> from >> to >> weight;
        v[from].push_back({to, weight}); v[to].push_back({from, weight});
    }
    for (int i = 0; i < nnode; i++) dist[i] = INT_MAX;
    dist[start] = 0;
    q.push({dist[start], start});
    while(!q.empty())
    {
        int nownode = q.top().second;
        int nowdist = q.top().first;
        q.pop();
        for(int i = 0; i < v[nownode].size(); i++)
        {
            int td = v[nownode][i].w;
            int tn = v[nownode][i].to;
            if(dist[tn] > dist[nownode] + td)
            {
                parent[tn] = nownode;
                dist[tn] = dist[nownode] + td;
                q.push({dist[tn], tn});
            }
        }
    }
    cout << dist[target] << endl;
    int nnow = target;
    while(nnow != start)
    {
        nnow = parent[nnow];
        path.push(nnow);
    }
    while(!path.empty())
    {
        cout << path.top() << " -> ";
        path.pop();
    }
    cout << target << endl;
    return 0;
}