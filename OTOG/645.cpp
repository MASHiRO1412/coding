#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }

int n;

int main()
{
    ios::sync_with_stdio(false);
    n = input();
    char c = input<char>();
    cout << (char)((int)c + n);
    return 0;
}