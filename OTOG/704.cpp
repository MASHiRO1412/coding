#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input(){return *istream_iterator<T>(cin);}
int n, m, q;
vector<int> v;
int main()
{
    cin >> n;
    v.push_back(input() + input());
    for (int i = 1; i < n; i++)
        v.push_back(v[i - 1] + input() + input());
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int t = input();
        cout << upper_bound(v.begin(), v.end(), t) - v.begin() << endl;
    }
    return 0;
}