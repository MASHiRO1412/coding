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
int nnode, nedge, mst;
int sett[500005], tree_high[500005];
priority_queue<edge> q;
int main()
{
    ios::sync_with_stdio(false);
    cin >> nnode >> nedge;
    for(int i = 0; i < nnode; i++)
        sett[i] = i;
    for(int i = 0; i < nedge; i++)
    {
        int from, to, weight;
        cin >> from >> to >> weight;
        q.push({from, to, weight});
    }
    while(!q.empty())
    {
        edge now = q.top();
        q.pop();
        int aset = now.from, bset = now.to;
        int prea = aset, preb = bset;
        while(aset != sett[aset])
        {
            aset = sett[aset];
            sett[prea] = aset;
        }
        while(bset != sett[bset])
        {
            bset = sett[bset];
            sett[preb] = bset;
        }
        if(aset != bset)
        {
            if(tree_high[aset] > tree_high[bset])
                sett[bset] = aset;
            else
            {
                sett[aset] = bset;
                if(tree_high[aset] == tree_high[bset]) tree_high[aset]++;
            }
            mst += now.w;
        }
    }
    cout << mst;
    return 0;
}