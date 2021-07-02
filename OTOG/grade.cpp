#include <bits/stdc++.h>

using namespace std;

int n, nq;

vector<int> v;

template <typename T = int>
T input()
{
    return *istream_iterator<T>(cin);
}

int main()
{
    int n = input();
    for (int i = 0; i < n; i++)
        v.push_back(input());
    sort(v.begin(), v.end());
    cin >> nq;
    for (int i = 0; i < nq; i++)
    {
        int cnt = 0;
        int q1 = input(); int q2 = input();
        if(q1 > q2)
        {
            int t = q1; q1 = q2; q2 = t;
        }
        auto it1 = lower_bound(v.begin(), v.end(), q1);
        auto it2 = upper_bound(v.begin(), v.end(), q2);
        for(it1; it1 < it2; it1++) cnt++;
        cout << cnt << endl;
    }
    return 0;
}