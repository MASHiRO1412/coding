#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
struct edge
{
    int from, to, w;
    friend bool operator < (edge a, edge b){return a.w > b.w;}
};
struct parent
{
    int f, s, w;
};
int nnode, nedge;
priority_queue<edge> q;
parent sett[2000];
vector<int> v;
long long mindata;
int main()
{
    ios::sync_with_stdio(false);
    cin >> nnode >> nedge;
    for(int i = 0; i < nnode; i++)
    {
        sett[i] = {i, i, 0};
    }
    for(int i = 0; i < nedge; i++)
    {
        int t, tt, ttt;
        cin >> t >> tt >> ttt;
        q.push({t, tt, ttt});
        q.push({tt, t, ttt});
    }
    edge pre;
    while(!q.empty())
    {
        edge now = q.top();
        q.pop();
        if(pre.to == now.from && now.to == pre.from) continue;
        pre = now;
        int aset = now.from, bset = now.to;
        int apos = 0, bpos = 0;
        while(aset != sett[aset].f) {aset = sett[aset].f; apos++;}
        while(bset != sett[bset].f) {bset = sett[bset].f; bpos++;}
        if(aset == bset)
        {
            int top = aset;
            aset = now.from, bset = now.to;
            mindata += now.w;
            if(apos > bpos)
            {
                int n = apos - bpos;
                while(n--)
                {
                    if(top == aset) goto label;
                    mindata += sett[aset].w;
                    aset = sett[aset].f;
                }
            }
            else
            {
                label :
                int n = bpos - apos;
                while(n--)
                {
                    mindata += sett[bset].w;
                    bset = sett[bset].f;
                }
            }
            break;
        }
        else
        {
            int ss = sett[now.from].s;
            sett[now.from] = {now.to, ss, now.w};
            int c = sett[ss].s;
            while(c != sett[c].s)
            {
                sett[c].f = ss;
                ss = c;
                c = sett[c].s; 
            }
        }
    }
    cout << mindata;
    return 0;
}