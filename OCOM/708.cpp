#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int n, m;
int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> m;
    if(n % 2 and m % 2) cout << "NO";
    else if(n == 2 or m == 2)
    {
        cout << "YES" << endl;
        if(n == 2)
        {
            for(int i = 0; i < m - 1; i++)
                cout << 'R';
            cout << 'D' << endl << 'U';
            for(int i = 1 ; i < m; i++)
                cout << 'L';
        }
        else
            for (int i = 0; i < n; i++)
            {
                if(i == 0) cout << "RD" << endl;
                else if(i == n - 1) cout << "UL" << endl;
                else cout << "UD" << endl;
            }
    }
    else if((n % 2 == 0 and m % 2) or (n % 2 == 0 and m % 2 == 0))
    {
        cout << "YES" << endl;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(j == 0 and i % 2 == 0) {cout << 'R'; continue;} 
                else if(j == 0 and i % 2) {cout << 'U'; continue;}
                if(i == 0 and j != m - 1) cout << 'R';
                else if(j == m - 1 and i != n - 1) cout << 'D';
                else if(i % 2 and j != 0) cout << 'L';
                else if(i % 2 and j == 0) cout << 'U';
                else if(i % 2 == 0 and j != m - 2) cout << 'R';
                else if(i % 2 == 0 and j == m - 2) cout << 'U';
            }
            cout << endl;
        }
    }
    else
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == n - 1 and j % 2 == 0){cout << 'U'; continue;}
                else if (i == n - 1 and j % 2){cout << 'L'; continue;}
                if (i == 0 and j != m - 1) cout << 'R';
                else if (j == m - 1 and i != n - 1) cout << 'D';
                else if (j % 2 and i != 0) cout << 'L';
                else if (i % 2 and j == 0) cout << 'U';
                else if (i % 2 == 0 and j != m - 2) cout << 'R';
                else if (i % 2 == 0 and j == m - 2) cout << 'U';
            }
            cout << endl;
        }
    }
    return 0;
}