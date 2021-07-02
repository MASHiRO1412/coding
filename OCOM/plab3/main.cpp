#include <bits/stdc++.h>

using namespace std;

int n,first,second,temp1,temp2;

int main()
{
    cin >> n;
    char ans[n];
    for(int i = 0; i < n; i++)
    {
        cin >> temp1 >> temp2;
        if(temp1 > temp2)  ans[i] = 'M';
        if(temp1 == temp2) ans[i] = 'E';
        if(temp1 < temp2)  ans[i] = 'L';
    }
    for(int i = 0; i < n; i++) cout << ans[i] << endl;
    return 0;
}
