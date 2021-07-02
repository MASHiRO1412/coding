#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int n, m;
int lawn[100000];
pair<int, int> zom[200000];
int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for(int i = 0; i < m; i++)
        cin >> lawn[i];
    for(int i = 0; i < n; i++)
    {
        zom[i] = {input(), input()};
    }
    return 0;
}