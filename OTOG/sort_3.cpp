#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n, nq;
vector<string> v;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int main()
{
    int n = input();
    for(int i = 0; i < n; i++) v.push_back(input<string>());
    sort(v.begin(), v.end());
    for(auto e : v)
        cout << e << endl;
    return 0;
}