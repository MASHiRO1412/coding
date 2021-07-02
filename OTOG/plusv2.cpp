#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int n, q, sum;
vector<int> v;
int main()
{
    n = input(); q = input();
    for(int i = 0; i < n; i++) v.push_back(input());
    //sort(v.begin(), v.end());
    for(int i = 0; i < q; i++)
    {
        int a = input(); int b = input(); int sum = 0;
        //auto it1 = lower_bound(v.begin(), v.end(), a);
        //auto it2 = upper_bound(v.begin(), v.end(), b);
        for(int i = a - 1; i < b; i++)
            sum = sum + v[i];
        cout << sum << endl;
    }
    return 0;
}