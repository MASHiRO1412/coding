#include <bits/stdc++.h>

using namespace std;

int sum1,sum2;

int main()
{
    int a,b;
    cin >> a >> b;
    for(int i = a; i < b; i++)
    {
        for(int j = i + 1; j <= b; j++)
            sum2 = sum2 + i + j;
        sum1 += sum2*pow(-1,i);
        sum2 = 0;
    }
    cout << sum1 << endl;
    return 0;
}
