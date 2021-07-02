#include <bits/stdc++.h>
#define endl "\n"
#define all(x) (x).begin(), end()
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
vector<pair<int, int>> s;
struct no{
    int t;
    pair<int, int> p;
    friend bool operator < (no a, no b){return a.t > b.t;}
};
bool flag[1001][1001];
priority_queue<no> q;
int n, mp[1001][1001], ma = INT_MIN;
int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            cin >> mp[i][j];
            if(mp[i][j] == 0) s.push_back({i,j});
        }
    q.push({0,s[0]});
    //cout << s[0].first << " " << s[0].second << endl;
    //cout << s[1].first << " " << s[1].second << endl;
    while(!q.empty())
    {
        no now = q.top();
        q.pop();
        if(!flag[now.p.first][now.p.second])
        {
            flag[now.p.first][now.p.second] = true;
            if(now.p == s[1]) break;
            ma = max(now.t, ma);
            if(now.p.first - 1 >= 0)
                q.push({mp[now.p.first - 1][now.p.second], {now.p.first - 1, now.p.second}});
            if(now.p.second - 1 >= 0)
                q.push({mp[now.p.first][now.p.second - 1], {now.p.first, now.p.second - 1}});
            if(now.p.second + 1 < n)
                q.push({mp[now.p.first][now.p.second + 1], {now.p.first, now.p.second + 1}});
            if(now.p.first + 1 < n)
                q.push({mp[now.p.first + 1][now.p.second], {now.p.first + 1, now.p.second}});
        }
    }
    cout << ma;
    return 0;
}