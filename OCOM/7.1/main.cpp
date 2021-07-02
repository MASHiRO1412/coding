#include <bits/stdc++.h>

using namespace std;

double sum = 1;
int k;

int main()
{
    while(sum > 0.5)
    {
        sum = sum*(365-k)/365;
        k++;
    }
    cout << k - 1 << endl;
    return 0;
}
