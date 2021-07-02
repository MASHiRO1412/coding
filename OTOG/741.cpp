#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int n, q, sum, l, r;
vector<int> v;
int main()
{
    cin >> n >> q;
    for(int i = 0; i < n; i++) v.push_back(input());
    for(int i = 0; i < q; i++)
    {
        char c = input<char>();
        if(c == 'L') l++;
        else r++;
    }
    for(int i = 0; i < l; i++) sum += v[i];
    for(int i = 0; i < r; i++) sum += v[n - i - 1];
    cout << sum;
    return 0;
}