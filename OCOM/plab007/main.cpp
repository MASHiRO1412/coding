#include <bits/stdc++.h>

using namespace std;

int n, nq, ins = 0, cnt = 0;

long a[20000], q[20000];

void bsearch(int lb, int ub, long key)
{
    if(lb == ub || key < a[n - 1] || key > a[0])
        cnt += 0;
    else if(key == a[lb])
    {
        cnt++;
        ins = ins + lb + 1;
    }
    else if(key == a[ub])
    {
        cnt++;
        ins = ins + ub + 1;
    }
    else if(key == a[(ub + lb) / 2])
    {
        cnt++;
        ins = ins + ((ub + lb) / 2) + 1;
    }
    else if(key < a[(ub + lb) / 2])
        bsearch(((ub + lb) / 2) + 1, ub, key);
    else if(key > a[(ub + lb) / 2])
        bsearch(lb, ((ub + lb) / 2) - 1, key);
}

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cin >> nq;
    for(int i = 0; i < nq; i++)
        cin >> q[i];
    sort(a,a + n,greater<int>());
    for(int i = 0; i < nq; i++)
        bsearch(0, n - 1, q[i]);
    cout << cnt << " " << ins;
    return 0;
}
