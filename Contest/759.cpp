#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
long long nnode, nedge, hack, coin;
vector<int> v[50000];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
long long hacktime[50000], mst;
bool hacked[50000];
int main()
{
    ios::sync_with_stdio(false);
    cin >> nnode >> nedge >> hack;
    for(long long i = 0; i < hack; i++)
        q.push({0, input()});
    for (long long i = 0; i < nnode; i++)
        cin >> hacktime[i];
    for(long i = 0; i < nedge; i++)
    {
        long long t = input(), tt = input();
        v[t].push_back(tt);
        v[tt].push_back(t);
    }
    while (!q.empty())
    {
        int now_hack = q.top().second;
        int nowtime = q.top().first;
        q.pop();
        if(hacked[now_hack]) continue;
        coin += (nowtime + hacktime[now_hack]);
        hacked[now_hack] = true;
        nowtime += hacktime[now_hack];
        for(int i = 0; i < v[now_hack].size(); i++) if(!hacked[v[now_hack][i]]) q.push({nowtime, v[now_hack][i]});
    }
    cout << coin;
    return 0;
}