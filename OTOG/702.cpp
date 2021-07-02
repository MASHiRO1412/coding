#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input(){return *istream_iterator<T>(cin);}
int n, m, q;
map<pair<int, int>, int> f;
int main()
{
    cin >> n >> m >> q;
    for(int i = 0; i < q; i++)
    {
        int x, y, r;
        cin >> x >> y >> r;
        if(r == 0) f[{x, y}]++;
        else
        {
            for (int j = 0; j <= r; j++)
            {
                if (x + j > 0 and x + j < n and y + (r - j) > 0 and y + (r - j) < m)
                {
                    f[{x + j, y + (r - j)}]++;
                    if (f[{x + j, y + (r - j)}] == q)
                    {
                        cout << x + j << " " << y + (r - j);
                        break;
                    }
                }
                if (x + j > 0 and x + j < n and y - (r - j) > 0 and y - (r - j) < m)
                {
                    f[{x + j, y - (r - j)}]++;
                    if (f[{x + j, y - (r - j)}] == q)
                    {
                        cout << x + j << " " << y - (r - j);
                        break;
                    }
                }
                if (x - j > 0 and x - j < n and y + (r - j) > 0 and y + (r - j) < m)
                {
                    f[{x - j, y + (r - j)}]++;
                    if (f[{x - j, y + (r - j)}] == q)
                    {
                        cout << x - j << " " << y + (r - j);
                        break;
                    }
                }
                if (x - j > 0 and x - j < n and y - (r - j) > 0 and y - (r - j) < m)
                {
                    f[{x - j, y - (r - j)}]++;
                    if (f[{x - j, y - (r - j)}] == q)
                    {
                        cout << x - j << " " << y - (r - j);
                        break;
                    }
                }
            }
        }  
    }
    return 0;
}