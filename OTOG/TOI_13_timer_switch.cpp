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
    string temp = s;
    for(int i = 0; i < n; i++)
    {
        char f = temp[0];
        char b = temp[n - 1];
        temp.erase(0,1);
        temp.insert(n - 1, 1, f);
        //cout << temp << endl;
        cnt++;
        if(temp == s)
            break;
    }
    cout << cnt;
    return 0;
}