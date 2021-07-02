#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
string s;
stack<string> n;
int main()
{
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '/' || s[i] == '*')
        {
            string t1 = n.top();
            n.pop();
            string t2 = n.top();
            n.pop();
            string t = "(" + t2 + s[i] + t1 + ")";
            n.push(t);
        }
        else 
        {
            string t;
            t = t + s[i];
            n.push(t);
        }
    }
    cout << n.top();
    return 0;
}