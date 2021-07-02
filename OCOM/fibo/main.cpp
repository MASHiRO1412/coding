#include <bits/stdc++.h>

using namespace std;

long fibo(long n)
{
    if(n == 1 || n == 2) return 1;
    else return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    long long n, fibon[100000];
    cin >> n;
    fibon[0] = 1;
    fibon[1] = 1;
    for(long i = 2; i < n; i++)
    {
        fibon[i] = fibon[i - 1] + fibon[i - 2];
    }
    cout << fibon[n - 1];
    return 0;
}
