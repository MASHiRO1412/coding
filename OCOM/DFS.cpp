#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int n, tree[100][100];
vector<int> path;
void dfs(int start, int stop)
{
    if(start == stop) for(auto e : path) cout << e << " ";
    for(int i = 0; i < n; i++)
        if(tree[start][i])
        {
            path.push_back(i);
            dfs(i, stop);
            path.pop_back();
        }
}
int main()
{
    int start, stop;
    cin >> n >> start >> stop;
    for(int i = 0; i < n - 1; i++) tree[input()][input()]++;
    path.push_back(0);
    dfs(start, stop);
    return 0;
}