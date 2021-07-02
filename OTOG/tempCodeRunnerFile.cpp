#include <bits/stdc++.h>
#define endl "\n"
#define all(x) (x).begin(), (x).end()
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
vector<int> v;
int n, jump, ma = INT_MIN;
int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> jump;
    for(int i = 0; i < n; i++) v.push_back(input());
    for(int i = 0; i < n; i++)
    {
        int it = upper_bound(all(v), v[i] + jump) - v.begin() - i - 1;
        ma = (it > ma) ? it : ma; 
    }
    cout << ma;
    return 0;
}