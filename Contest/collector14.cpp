#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

pair<int, int> ma = {INT_MIN,0};

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
        if(f == ma.first)
        {
            cout << ma.second << endl; 
            continue;
        }
        else if(ma.first < 0)
        {
            cout << "0" << endl;
            continue;
        }
        for(int j = 0; j < n; j++)
        {
            if (f > ma.first)
            {
                cout << "-1" << endl;
                break;
            }
            else if(v[j] >= f)
            {
                cout << j << endl;
                break;
            }
        }
    }
    return 0;
}

