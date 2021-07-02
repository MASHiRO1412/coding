#include <bits/stdc++.h>

using namespace std;

int n,a[100000],temp,mode,mf = 0;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> temp; a[temp]++;
        if(a[temp] > mf)
        {
            mf = a[temp];
            mode = temp;
        }
    }
    cout << "MODE : " << mode << endl << "FREQUENCY : " << mf << endl;
    return 0;
}
