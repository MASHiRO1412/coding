#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }

int n, q;
string a, b;

int main()
{
    ios::sync_with_stdio(false);
    cin >> q >> n;
    for(int i = 0; i < q; i++)
    {
        cin >> a >> b;
        if(b.size() > n) cout << "X ";
        else if(a == b) cout << "P ";
        else if(a != b) cout << "- ";
    }
    return 0;
}