#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int n, p, c;
vector<int> v;
int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> p >> c;
    for(int i = 0; i < n; i++)
        v.push_back(input());
    v.insert(v.begin() + p, c);
    if ((v[p] == v[p - 1] and v[p] == v[p + 1]) or (v[p - 2] == v[p - 1] and v[p] == v[p - 1]) or (v[p] == v[p + 1] and v[p] == v[p + 2]))
    {
        while(true)
        {
            int l, u;
            for (int i = p; i >= -1; i--)
            {
                if(v[i] != v[p] or i == -1)
                {
                    l = i;
                    break;
                }
            }
            for (int i = p; i < INT_MAX; i++)
            {
                if (v[i] != v[p])
                {
                    u = i;
                    break;
                }
            }
            if(l == -1 and u == v.size()) 
            {
                v.clear();
                break;
            }
            else 
            {
                v.erase(v.begin() + l + 1, v.begin() + u);
                p = l;
                if ((v[p] == v[p - 1] and v[p] == v[p + 1]) or (v[p] == v[p + 2] and v[p] == v[p + 1]))
                    continue;
                else break;
            }
        }
    }
    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
    return 0;
}