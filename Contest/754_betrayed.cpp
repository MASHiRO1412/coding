#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int n;
vector<int> v;
int main()
{
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        v.push_back(input());
    }
    a[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        a[i] += a[i - 1] + v[i];
    }
    return 0;
}