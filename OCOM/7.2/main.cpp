#include <bits/stdc++.h>

using namespace std;

double sum[2];

int main()
{
    for(int i = 1; i <= 399997; i += 4)
        sum[0] = sum[0] + (double)1/i;
    for(int i = 3; i <= 399999; i += 4)
        sum[1] = sum[1] + (double)1/i;
    cout << 4*(sum[0]-sum[1]) << endl;
    return 0;
}
