#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
long long fibo_fast(long long x)
{
    return (x == 1 || x == 2) ? 1 : fibo_fast(x - 1) + fibo_fast(x - 2);
}
long long fib(long long x)
{
    return (x == 1 || x == 2) ? 1 : fib(x - 1) + fib(x - 2);
}
long long n;
int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    cout << fib(n);
    return 0;
}