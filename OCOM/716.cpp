#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int n, sett[100000], q, inset[100000], edge;
string t = "true\n", f = "false\n";
int find_parent(int x)
{
    int xset = x, prev;
    while(xset != sett[xset])
    {
        prev = xset;
        xset = sett[xset];
        sett[prev] = xset;
    }
    return xset;
}
void make_set(int x, int y)
{
    sett[y] = sett[x];
}
int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> edge;
    for(int i = 0; i < n; i++) sett[i] = i;
    for(int i = 0; i < edge; i++)
    {
        int a, b;
        cin >> a >> b;
        if(find_parent(a) != find_parent(b))
            make_set(a, b);
    }
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;
        if(find_parent(a) == find_parent(b)) cout << "true\n";
        else cout << "false\n";
    }
    return 0;
}