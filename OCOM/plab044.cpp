#include <bits/stdc++.h>
#define endl "\n"
#define all(x) (x).begin(), (x).end()
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
struct edge
{
    int from, to, w;
    friend bool operator < (edge a, edge b){return a.w > b.w;}
};
priority_queue<edge> q;
int nnode, nedge, mst, sett[500000], tree_high[500000];
int main()
{
    ios::sync_with_stdio(false);
    cin >> nnode >> nedge;
    for(int i = 0; i < nnode; i++)
        sett[i] = i;
    for(int i = 0; i < nedge; i++)
        q.push({input(), input(), input()});
    nnode--;
    while(nnode)
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
            nnode--;
            sett[bset] = aset;
            mst += now.w;
        }
    }
    cout << mst;
    return 0;
}