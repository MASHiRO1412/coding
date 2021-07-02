#include <bits/stdc++.h>
#define endl "\n"
#define all(x) (x).begin(), (x).end()
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
vector<pair<int, int>> v;
int n;
int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    for(int i = 0; i < n; i++)
        v.push_back({input(), input()});
    sort(all(v), [](pair<int, int> a, pair<int, int> b){return (a.first == b.first) ? a.second > b.second : a.first < b.first;});
    for(auto e : v)
        cout << e.first << " " << e.second << endl;
    return 0;
}