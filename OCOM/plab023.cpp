/*
TASK: plab023.cpp , 752
LANG: C++
AUTHOR: Jirapat Jomtong
CENTER: KKU016
*/
#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

template <typename T = int>
T input() { return *istream_iterator<T>(cin); }

vector<int> v;
vector<int> b;

int main()
{
    ios_base::sync_with_stdio(false);
    int n = input();
    int q = input();
    for (int i = 0; i < n; i++)
    {
        int t = input();
        if (i == 0)
            v.push_back(t);
        else
            v.push_back(t + v[i - 1]);
        if (i == 0)
            b.push_back(t);
        else if (v[i] > b[i - 1])
            b.push_back(v[i]);
        else
            b.push_back(b[i - 1]);
    }
    for (int i = 0; i < q; i++)
    {
        int f = input();
        auto it = lower_bound(b.begin(), b.end(), f);
        if (it != b.end())
            cout << it - b.begin() << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}
