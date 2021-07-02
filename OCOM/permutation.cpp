#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int n, q, cnt;
vector<string> v;
int main()
{
    cin >> n;
    for(int i = 0; i < n; i++) v.push_back(input<string>());
    sort(v.begin(), v.end());
    do
    {
        for(auto e : v) cout << e << " ";
        cnt++;
        cout << endl;
    }
    while(next_permutation(v.begin(), v.end()));
    cout << cnt << endl;
    return 0;
}