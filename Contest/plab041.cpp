#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int nnode, nedge, start, target;
long long v[10000][10000];
int main()
{
    ios::sync_with_stdio(false);
    cin >> nnode >> nedge; 
    cin >> start >> target;
    for(int i = 0; i < nnode; i++)
        for(int j = 0; j < nnode; j++)
        {
            if(i == j) v[i][j] = 0;
            else v[i][j] = INT_MAX;
        }
    for(int i = 0; i < nedge; i++)
    {
        int t, tt, ttt;
        cin >> t >> tt >> ttt;
        v[t][tt] = ttt;
        v[tt][t] = ttt;
    }
    for(int k = 0; k < nnode; k++)
        for(int i = 0; i < nnode; i++)
            for(int j = 0; j < nnode; j++)
                v[i][j] = min(v[i][j], v[i][k] + v[k][j]);
    cout << v[start][target] << endl << v[start][target] * 20;
    return 0;
}