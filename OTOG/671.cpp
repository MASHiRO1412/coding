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
    int a, x;
    char c, h;
    for (int i = 0; i < n; i++)
    {
        cin >> c >> a >> h >> x;
        if(a * 2 - 2 == x) printf("Alkyne\n");
        else if(a * 2 == x) printf("Alkene\n");
        else if(a * 2 + 2 == x) printf("Alkane\n");
    }
    return 0;
}