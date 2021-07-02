#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int n;
stack<pair<string, int>> v;
int main()
{
    cin >> n;
    for(int i = 0;  i < n; i++)
    {
        string t;
        cin >> t;
        if(t == "stk_i_a")
        {
            int tt = input();
            for(int i = 0; i < tt; i++) v.push({input<string>(), input()});
        }
        else if(t == "stk_i") v.push({input<string>(), input()});
        else if(t == "stk_p") cout << v.top().first << " " << v.top().second << endl;
        else if(t == "stk_d") v.pop();
        else if(t == "stk_s") cout << v.size() << endl;
        else if(t == "stk_p_a")
        {
            while(!v.empty())
            {
                cout << v.top().first << " " << v.top().second << endl;
                v.pop();
            }
        } 
    }
    return 0;
}