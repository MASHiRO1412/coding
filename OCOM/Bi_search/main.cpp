#include <bits/stdc++.h>

using namespace std;

int a[100], n, key;

int bsearch(int lb, int ub)
{
    if(lb - ub == 1 || key < a[0] || key > a[n-1]) return -1;
    else if(key == a[lb]) return lb;
    else if(key == a[ub]) return ub;
    else if(a[(lb + ub) / 2] == key) return (lb + ub) / 2;
    else if(key > a[(lb + ub) / 2]) return bsearch((lb + ub) / 2 + 1, ub);
    else if(key < a[(lb + ub) / 2]) return bsearch(lb, (lb + ub) / 2 - 1);
}

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cin >> key;
    cout << bsearch(0,n - 1) << endl;
    return 0;
}
