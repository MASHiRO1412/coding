#include <bits/stdc++.h>

using namespace std;

stack<string> q;

int n;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string t;
        string a;
        cin >> t;
        if(t == "push")
        {
            cin >> a;
            q.push(a);
        }
        else if(t == "pop" && !q.empty())
        {
            a = q.top();
            cout << a << endl;
            q.pop();
        }
        else if(t == "pop" && q.empty())
            cout << "null" << endl;
    }
    return 0;
}
