#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
struct q
{
    string a, b, c;
};
int n;
queue<q> v;
int main()
{
    cin >> n;
    for(int i = 0;  i < n; i++)
    {
        string t;
        cin >> t;
        if(t == "que_i_a")
        {
            int tt = input();
            for(int i = 0; i < tt; i++) v.push({input<string>(), input<string>(), input<string>()});
        }
        else if(t == "que_i") v.push({input<string>(), input<string>(), input<string>()});
        else if(t == "que_p_f") cout << v.front().a << " " << v.front().b << " " << v.front().c << endl;
        else if(t == "que_p_l") cout << v.back().a << " " << v.back().b << " " << v.back().c << endl;
        else if(t == "que_d") v.pop();
        else if(t == "que_s") cout << v.size() << endl;
        else if(t == "que_p_a")
        {
            while(!v.empty())
            {
                cout << v.front().a << " " << v.front().b << " " << v.front().c << endl;
                v.pop();
            }
        } 
    }
    return 0;
}