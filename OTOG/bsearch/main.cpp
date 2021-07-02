#include <bits/stdc++.h>

using namespace std;

int a[200000], n, q, key;

int bsearch(int lb, int ub, int key)
{
    if(key < a[0]) return -1;
    else if(key > a[n - 1]) return a[n - 1];
    else if(lb - ub == 1) return a[lb - 1];
    else if(key == a[lb]) return a[lb];
    else if(key == a[ub]) return a[ub];
    else if(a[(lb + ub) / 2] == key) return a[(lb + ub) / 2];
    else if(key > a[(lb + ub) / 2]) return bsearch((lb + ub) / 2 + 1, ub, key);
    else if(key < a[(lb + ub) / 2]) return bsearch(lb, (lb + ub) / 2 - 1, key);
}

int main()
{
    cin >> n >> q;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < q; i++)
    {
        cin >> key;
        cout << bsearch(0, n - 1, key) << endl;
    }
    return 0;
}
