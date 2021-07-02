#include <bits/stdc++.h>
#define endl "\n"
#define all(x) (x).begin(), (x).end()
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
long long n, jump, start, board[3000005], loop, loop_found, now, cnt, flag[3000005];
int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> jump >> start;
    now = start;
    for(int i = 1; i <= n; i++)
    {
        int t = input();
        board[i] = i + t;
    }
    while(jump--)
    {
        if(now == flag[now] and not loop_found)
        {
            loop_found = true;
            cnt = 0;
            loop = now;
        }
        flag[now]++;
        now = board[now];
        cnt++;
        if(now == loop)
        {
            for(int i = 0; i < jump % cnt; i++)
                now = board[now];
            break;
        }
    }
    cout << now;
    return 0;
}