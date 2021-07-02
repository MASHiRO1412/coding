#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
long long n, ISS[105];
int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    ISS[0] = 1;
    for (long long i = 1; i <= n; i++)
        for (long long j = 0; j <= n; j++)
            ISS[i + j] += ISS[j];
    cout << ISS[n];
    return 0;
}