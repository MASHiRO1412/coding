#include <bits/stdc++.h>

using namespace std;

int sum(int a)
{
    return (a + 1) * a / 2;
}

int main()
{
    int x, y ,z;
    cin >> x >> y >> z;
    cout << sum(x) - sum(y) + sum(z) << endl;
    return 0;
}
