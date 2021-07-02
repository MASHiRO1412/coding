#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int nnode, nedge, start, stop;
vector<int> v[100];
vector<int> path;
bool flag[100] = {false};
void dfs(int now)
{
    if(now == stop)
    {
        for(auto e : path) cout << e << " ";
        cout << stop << endl;
    }
    else if(!flag[now])
    {
        for(int i = 0; i < v[now].size(); i++)
        {
            flag[now] = true;
            path.push_back(now);
            dfs(v[now][i]);
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
        int from, to;
        cin >> from >> to;
        v[from].push_back(to);
        v[to].push_back(from);
    }
    dfs(start);
    return 0;
}