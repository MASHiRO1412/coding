#include <bits/stdc++.h>

using namespace std;

vector<int> v[3];

int n, i1, i2;

int main()
{
    cin >> n;
    int lo;
    for(int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if(t % 2)
        {
            v[2].push_back(1);
            v[1].push_back(t);
            i1++;
        }
        else
        {
            v[2].push_back(0);
            v[0].push_back(t);
            i2++;
        }
    }
    sort(v[1].begin(), v[1].end());
    i1 = 0;
    i2 = 0;
    for(int i = 0; i < v[2].size(); i++)
    {
        if(v[2][i])
        {
            cout << v[1][i1] << " ";
            i1++;
        }
        else
        {
            cout << v[0][i2] << " ";
            i2++;
        }
    }
    return 0;
}
