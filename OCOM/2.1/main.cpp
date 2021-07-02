#include <bits/stdc++.h>

using namespace std;

string s[100],c;
int cnt, n;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> s[i];
    cin >> c;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < s[i].size(); j++)
            if(s[i][j] == c[0] && j + c.size() - 1 < s[i].size())
                if(s[i].substr(j, c.size()) == c)
                    cnt++;
    cout << cnt << endl;
    return 0;
}
