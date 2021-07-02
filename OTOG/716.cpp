#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int n, sett[100005], q, edge, tree;
int find_parent(int x)
{
    int pre = x;
    while(x != sett[x])
    {
        x = sett[x];
        sett[pre] = x; 
    }
    return x;
}
void make_set(int x, int y)
{
    sett[y] = x;
}
int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> edge;
    for(int i = 0; i <= n; i++) sett[i] = i;
    for(int i = 0; i < edge; i++)
    {
        int a, b;
        cin >> a >> b;
        if(find_parent(a) != find_parent(b))
            make_set(find_parent(a), find_parent(b));
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