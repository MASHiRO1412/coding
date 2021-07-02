#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

pair<int, int> ma = {INT_MIN, 0};
pair<int, int> pre = {INT_MIN, 0};

int main()
{
    int n, q;
    cin >> n >> q;
    int v[n];
    cin >> v[0];
    for(int i = 1; i < n; i++)
    {
        int t;
        cin >> t;
        v[i] = v[i - 1] + t;
        if (v[i] > ma.first) ma = {v[i], i};
    }
    for(int i = 0; i < q; i++)
    {
        int f;  
        cin >> f;
        if (f > ma.first)
        {
            cout << "-1" << endl;
            continue;
        }
        else if (f == ma.first)
        {
            cout << ma.second << endl;
            pre = {f, ma.second};
            continue;
        }
        else if(f > pre.first)
        {
            for (int j = pre.second; j < n; j++)
            {
                if (v[j] >= f)
                {
                    cout << j << endl;
                    pre = {f, j};
                    break;
                }
            }
        }
        else if (f < pre.first)
        {
            for (int j = 0; j < pre.second; j++)
            {
                if (v[j] >= f)
                {
                    cout << j << endl;
                    pre = {f, j};
                    break;
                }
            }
        }
    }
    return 0;
}

