#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int n;
int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string t = input<string>();
        cout << ((t.back() == '3') ? "Winter lovesong\n" : "Winter Lovesong\n");
    }
    return 0;
}