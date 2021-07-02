#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int main()
{
    long long a = input();
    long long b = input();
    cout << __gcd(a, b);
    return 0;
}