/*
TASK: plab026.cpp , 753
LANG: C++
AUTHOR: Jirapat Jomtong
CENTER: KKU016
*/
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }

long long n, m, q, x, y;
long long ans[9];
vector<pair<long long, long long>> bomb;
vector<pair<long long, long long>> point;

long long xx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
long long yy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main()
{
    cin >> n >> m >> q;
    for (long long i = 0; i < q; i++)
    {
        cin >> x >> y;
        x--; y--;
        bomb.push_back({x,y});
    }
    sort(bomb.begin(), bomb.end());
    for (long long i = 0; i < q; i++)
    {
        x = bomb[i].first;
        y = bomb[i].second;
        for (long long k = 0; k < 8; k++)
        {
            long long tx = x + xx[k];
            long long ty = y + yy[k];
            if(tx < 0 || tx > n - 1 || ty < 0 || ty > m - 1) continue;
            if(!binary_search(bomb.begin(), bomb.end(), make_pair(tx, ty)))
                  point.push_back({tx, ty});
        }
    }
    sort(point.begin(), point.end());
    pair<long long, long long> pp = point[0];
    long long sum = 0;
    long long tx;
    long long ty;
    for (long long i = 0; i < point.size(); i++)
    {
        tx = point[i].first;
        ty = point[i].second;
        if(make_pair(tx, ty) == pp) 
            sum++;
        else
        {
            ans[sum]++;
            pp = {tx, ty};
            sum = 1;
        }
    }
    ans[sum]++;
    ans[0] = n * m - q;
    for (long long i = 1; i < 9; i++)
    {
        ans[0] -= ans[i];
    }
    for (long long i = 0; i < 9; i++)
    {
        cout << i << " " << ans[i] << endl;
    }
    return 0;
}
