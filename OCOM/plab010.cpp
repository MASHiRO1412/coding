#include <bits/stdc++.h>

using namespace std;

int n, nq, cnt, ocnt;

vector<int> v, q;

template <typename T = int>
T input()
{
    return *istream_iterator<T>(cin);
}

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
        v.push_back(input());
    cin >> nq;
    for(int i = 0; i < nq; i++)
        q.push_back(input());
    for(int i = 0; i < q.size(); i++)
    {
        auto it = find(v.begin(), v.end(), q[i]);
        if(it != v.end()) cnt++;
        if(*it % 2) ocnt++;
    }
    cout << cnt << " " << ocnt << endl;
    return 0;
}