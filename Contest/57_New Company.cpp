#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int sett[30000];
set<int> ans;
int n, nlang, zero;
int find_parent(int x)
{
    if(sett[x] != x) 
        sett[x] = find_parent(sett[x]);
    return sett[x];
}
void union_lang(int p, int l)
{
    int pp = find_parent(p);
    int pl = find_parent(l);
    if(pp < pl)
        sett[pl] = pp;
    else if(pp > pl)
        sett[pp] = pl;
}
int main()
{
    cin >> n >> nlang;
    for(int i = 0; i < 30000; i++)
        sett[i] = i;
    for(int i = 0; i < n; i++)
    {
        int t = input();
        int lang;
        for(int j = 0; j < t; j++)
        {
            cin >> lang;
            union_lang(i, lang + 10005);
        }
    }
    for(int i = 0; i < n; i++)
        ans.insert(find_parent(i));
    cout << ans.size() - 1;
    return 0;
}