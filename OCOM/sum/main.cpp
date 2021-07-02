#include <iostream>

using namespace std;

long long sum(long long n)
{
    if(n == 1) return 1;
    else return n + sum(n - 1);
}

long long fact(long long n)
{
    if(n == 1) return 1;
    else return n * fact(n - 1);
}

int main()
{
    long long n;
    cin >> n;
    cout << "Sum : " << sum(n) << endl << "Fact : " << fact(n);
    return 0;
}
