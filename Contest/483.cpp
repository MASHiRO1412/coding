#include <bits/stdc++.h>
#define endl "\n"
#define all(x) (x).begin(), end()
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int n;
string q;
int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> q;
    string l = q.substr(0, q.find('*'));
    string r = q.substr(q.find('*') + 1, q.size() - q.find('*'));
    while(n--)
    {
        string t = input<string>();
        if(t.size() < q.size() - 1) cout << "No\n";
        else if (t.find(l) + l.size() <= t.find(r) and t.find(l) == 0 and t.rfind(r) == t.size() - r.size()) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}