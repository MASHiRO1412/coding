#include <bits/stdc++.h>
#define endl "\n"
#define all(x) (x).begin(), (x).end()
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
long long n, m, with_j, with_noj;
long long coin[10000][10000];
vector<int> v;
/*void coin(int now_money, vector<int> x)
{
    if(now_money - x[x.size() - 1] < 0) goto a;
    if(now_money - x[x.size() - 1] == 0) cnt++;
    else coin(now_money - x[x.size() - 1], x);
    a :
    if(x.size() != 1)
    {
        x.pop_back();
        coin(now_money, x);
    }
}*/
int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for (long long i = 0; i < m; i++) v.push_back(input());
    for (long long i = 0; i < m; i++) coin[0][i] = 1;
    sort(all(v));
    for (long long i = 1; i <= n; i++)
        for (long long j = 0; j < m; j++)
        {
            with_j = (i - v[j] > - 1) ? coin[i - v[j]][j] : 0;
            with_noj = (j > 0) ? coin[i][j - 1] : 0;
            coin[i][j] = with_j + with_noj;
        }
    cout << coin[n][m - 1];
    return 0;
}