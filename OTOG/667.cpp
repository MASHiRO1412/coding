#include <bits/stdc++.h>
using namespace std;
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> order;
vector<pair<int,int>> graph[10001];
int dist[10001];
int n, edge, start, finish, from, to, weight;
int main()
{
    cin >> n >> edge >> start >> finish;
    for(int i = 0; i < edge; i++)
    {
        cin >> from >> to >> weight;
        graph[from].push_back(make_pair(weight,to));
        graph[to].push_back(make_pair(weight,from));
    }
    for(int i = 0; i <= n; i++)
        dist[i] = INT_MAX;
    dist[start]=0;
    order.push(make_pair(0,start));
    while(!order.empty())
    {
        int now_node = order.top().second;
        int now_dist = order.top().first;
        order.pop();
        for(auto e : graph[now_node])
        {
            int to_node = e.second;
            int to_dist = e.first;
            if(dist[now_node] + to_dist < dist[to_node])
            {
                dist[to_node] = dist[now_node] + to_dist;
                order.push(make_pair(dist[to_node],to_node));
            }
        }
    }
    cout << dist[finish];
    return 0;
}