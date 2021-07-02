#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
struct task
{
    char c;
    int i, n;
};
int n;
stack<task> v;
stack<char> u;
string t;
void U(char q, int n)
{
    if(q == 'T') 
    {
        t += u.top();
        u.pop();
    }
    else
    {
        
    }
}
int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        char c = input<char>();
        if(c == 'T')
        {
            v.push({c, i, n});
            char tt = input<char>();
            t = t + tt;
        }
        else 
        {
            int q = input();
            v.push({c, i, n});
            for(int j = 0; j < q; j++)
            {
                if(i - j - 1 == v.top().i)
                {
                    for(int k = 0; k < v.top().n; )
                    t = t + u.top();
                    u.pop()
                }
                u.push(t[t.size() - 1]);
                t.erase(t.end() - 1);
            }
        } 
    }
    cout << t;
    return 0;
}