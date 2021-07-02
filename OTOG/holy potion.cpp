#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n, nq;
vector<int> v;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int main()
{
    int n = input();
    int nq = input();
    for(int i = 0; i < n; i++) v.push_back(input());
    sort(v.begin(), v.end());
    for(int i = 0; i < nq; i++)
    {
        int cnt = 0;
        int from = input(); int to = input();
        if(from > to) { int t = to; to = from; from = t; }
        vector<int>::iterator it1 = (to < v[0]) ? v.begin() : lower_bound(v.begin(), v.end(), from);
        vector<int>::iterator it2 = (to > v[n - 1]) ? v.end() : upper_bound(v.begin(), v.end(), to);            
        for (it1; it1 < it2; it1++) cnt++;
        cout << cnt << endl; 
    }
    return 0;
}