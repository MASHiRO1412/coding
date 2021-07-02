#include <bits/stdc++.h>

using namespace std;

set<int> s;

int main()
{
    for(int i = 1; i <= 100000; i++)
        s.insert(i);
    int n, q;
    cin >> n >> q;
    for(auto i = s.lower_bound(n); i != s.upper_bound(q); i++)
        cout << *i << endl;
    return 0;
}
