#include <bits/stdc++.h>

using namespace std;

int n, id[1000], score[1000], ma = INT_MIN, mi = INT_MAX,
    maxcollect[100][1000], mincollect[100][1000], maxf, minf;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> id[i] >> score[i];
        if(score[i] == ma)
        {
            maxf++;
            maxcollect[ma][maxf-1] = id[i];
        }
        else if(score[i] == mi)
        {
            minf++;
            mincollect[mi][minf-1] = id[i];
        }
        if(score[i] > ma)
        {
            ma = score[i]; maxf = 1;
            maxcollect[ma][maxf-1] = id[i];
        }
        if(score[i] < mi)
        {
            mi = score[i]; minf = 1;
            mincollect[mi][minf-1] = id[i];
        }
    }
    cout << ma << " " << maxf << endl;
    for(int i = 0; i < maxf; i++)
        cout << maxcollect[ma][i] << endl;
    cout << mi << " " << minf << endl;
    for(int i = 0; i < minf; i++)
        cout << mincollect[mi][i] << endl;
    return 0;
}
