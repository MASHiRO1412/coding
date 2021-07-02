#include <bits/stdc++.h>
#define endl "\n"
#define all(x) (x).begin(), (x).end()
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
long long n, nedge, r, q, rr;
struct node
{
    int to, w;
    friend bool operator < (node a, node b){return a.w > b.w;}
};
vector<node> v[30010];
unordered_map<int, array<int, 30010>> dist;
int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> nedge >> r >> q;
    for(int i = 0; i < nedge; i++)
    {
        int from, to, w;
        cin >> from >> to >> w;
        v[from].push_back({to, w});
        v[to].push_back({from, w});
    }
    for(int i = 0; i < r; i++) cin >> rr;
    for(int i = 0; i < q; i++)
    {
        int start, restuarant, target;
        priority_queue<node> q;
        cin >> start >> restuarant >> target;
        if(dist[restuarant][start]) 
        {
            cout << dist[restuarant][start] + dist[restuarant][target] << endl;
            continue;
        }
        for(int j = 0; j < n; j++) dist[restuarant][j] = INT_MAX;
        dist[restuarant][restuarant] = 0;
        q.push({restuarant, 0});
        while(!q.empty())
        {
            int now = q.top().to;
            int now_dist = q.top().w;
            q.pop();
            for(int j = 0; j < v[now].size(); j++)
            {
                if(dist[restuarant][now] + v[now][j].w < dist[restuarant][v[now][j].to])
                {
                    dist[restuarant][v[now][j].to] = dist[restuarant][now] + v[now][j].w;
                    q.push({v[now][j].to, dist[restuarant][v[now][j].to]});
                }
            }
        }
        cout << dist[restuarant][start] + dist[restuarant][target] << endl;
    }
    return 0;
}