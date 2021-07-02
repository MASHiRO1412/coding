#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int w, l, a[1005][1005], x, y, sum;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }

int main()
{
    w = input(); l = input();
    x = input(); y = input();
    for(int i = 0; i < w; i++)
        for(int j = 0; j < l; j++)
            a[i][j] = input();
    for(int i = 0; i < w; i++)
        sum = sum + a[i][y - 1];
    for(int i = 0; i < l; i++)
        sum = sum + a[x - 1][i];
    cout << sum - a[x - 1][y - 1];
    return 0;
}