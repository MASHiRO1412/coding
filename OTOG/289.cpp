#include <bits/stdc++.h>
#define endl "\n"
#define all(x) (x).begin(), (x).end()
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int n, q;
vector<int> v;
int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> q;
    for(int i = 0; i < n; i++)
        v.push_back(input());
    for(int i = 0; i < q; i++)
    {
        int t;
        cin >> t;
        if(t < v.front())
        {
            cout << "-1" << endl;
            continue;
        } 
        else if(t > v.back())
        {
            cout << v.size() - 1 << endl;
            continue;
        } 
        cout << upper_bound(all(v), t) - v.begin() - 1 << endl;
    }
    return 0;
}