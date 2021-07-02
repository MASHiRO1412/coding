#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
struct node
{
    int to, w;
    friend bool operator<(node a, node b) { return a.w < b.w; }
};
int nnode, nedge, start, target;
vector<node> v[100];
priority_queue<node> q;
bool flag[100];
int dist[100] = {INT_MAX};
int main()
{
    ios::sync_with_stdio(false);
    for(int i = 0; i < 100; i++)
    {
        cout << dist[i] << endl;
    }
    return 0;
}