#include <bits/stdc++.h>

using namespace std;

long a[40000];
int n, nq, q[40000], flag = 0;
string c;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cin >> c;
    cin >> nq;
    for(int i = 0; i < nq; i++)
        cin  >> q[i];
    /*while(flag < n - 1)
    {
        long mi = LONG_MAX, ma = LONG_MIN;
        int in;
        for(int i = flag; i < n; i++)
        {
            if(a[i] < mi && c == "mintomax")
            {
                mi = a[i];
                in = i;
            }
            if(a[i] >  ma && c == "maxtomin")
            {
                ma = a[i];
                in = i;
            }
        }
        long temp = a[flag];
        a[flag] = a[in];
        a[in] = temp;
        flag++;
    }*/
    if(c == "mintomax") sort(a,a + n,less<int>());
    else sort(a,a + n,greater<int>());
    for(int i = 0; i < nq; i++)
        cout << a[q[i] - 1] << endl;
    return 0;
}
