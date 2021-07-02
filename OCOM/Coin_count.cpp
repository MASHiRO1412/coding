#include <bits/stdc++.h>
#define endl "\n"
#define all(x) (x).begin(), (x).end()
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int n, money, cnt;
vector<int> v;
void coin(int now_money, vector<int> x)
{
    if(now_money - x[x.size() - 1] < 0) 
        goto a;
    if(now_money - x[x.size() - 1] == 0)
    {
        cnt++;
    }
    else coin(now_money - x[x.size() - 1], x);
    a :
    if(x.size() != 1)
    {
        x.pop_back();
        coin(now_money, x);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin >> money >> n;
    for(int i = 0; i < n; i++)
        v.push_back(input());
    sort(all(v));
    coin(money, v);
    cout << cnt;
    return 0;
}