#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int main()
{
    int t;
    while(scanf("%d",&t) != EOF)
    {
        if(t >= 50) printf("P\n");
        else printf("-\n");
    }
    return 0;
}