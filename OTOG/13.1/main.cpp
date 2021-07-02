#include <bits/stdc++.h>

using namespace std;

multiset<int> s = {10, 10, 20, 10, 30, 20, 20, 40, 40, 50};

int lp = *s.begin(), cnt;

void sum(int i)
{
    if(lp == i)
        cnt++;
    else
    {
        cout << lp << " : " << cnt << endl;
        cnt = 1;
        lp = i;
    }
}

int main()
{
    for(auto i = s.begin(); i != s.end(); i++)
    {
        sum(*i);
    }
    cout << lp << " : " << cnt << endl;
    return 0;
}
