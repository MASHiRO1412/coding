#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
struct node{int to, w;};
int nnode, nedge, start, stop;
vector<node> v[20];
vector<int> path;
map<int, vector<int>> allpath;
bool flag[20] = {false};
int dist, mindist = INT_MAX;
void dfs(int now)
{
    if(now == stop)
    {
        if(dist < mindist) mindist = dist;
        allpath[dist] = path;
    }
    else if(!flag[now])
    {
        for(int i = 0; i < v[now].size(); i++)
        {
            flag[now] = true;
            path.push_back(now);
            dist += v[now][i].w;
            dfs(v[now][i].to);
            dist -= v[now][i].w;
            path.pop_back();
            flag[now] = false;
        }
    }
}
int main()
{
    cin >> nnode >> nedge >> start >> stop;
    for(int i = 0; i < nedge; i++)
    {
        int from, to, weight;
        cin >> from >> to >> weight;
        v[from].push_back({to, weight});
        v[to].push_back({from, weight});
    }
    dfs(start);
    for(int i = 0; i < allpath[mindist].size(); i++) cout << allpath[mindist][i] << "->";
    cout << stop << endl
         << allpath[mindist].size() << endl
         << mindist; 
    return 0;
}