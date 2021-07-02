#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
long n;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }

long long fact(long long i)
{
    return (i == 1) ? 1 : i * fact(i - 1);
}

int main()
{
    n = input();
    cout << fact(n);
    return 0;
}