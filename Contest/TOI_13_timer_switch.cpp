#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }

int n, q, cnt;

string s;

int main()
{
    n = input();
    cin >> s;
    string temp1 = s;
    string temp2 = s;
    for(int i = 0; i < n; i++)
    {
        //char f = temp1[0];
        char b = temp2[n - 1];
        //temp1.erase(0,1);
        //temp1.insert(n - 1, 1, f);
        temp2.erase(n - 1,1);
        temp2.insert(0, 1, b);
        //cout << temp << endl;
        cnt++;
        if(temp2 == s)
            break;
    }
    cout << cnt;
    return 0;
}