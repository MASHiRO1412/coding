#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }

struct par 
{
    int pri;
    string name;
    friend bool operator < (par a, par b){return a.pri < b.pri;}
};

int n;
string a, b;
priority_queue<par> q;


int main()
{
    string f;
    for(int i = 0; i < INT_MAX; i++)
    {
        cin >> f;
        if (f == "New")
        {
            string temp;
            int t;
            cin >> temp >> t;
            q.push({t, temp});
        }
        else if (f == "Call")
        {
            cout << q.top().name << endl;
            q.pop();
        }
        else if (f == "Exit") break;
    }
    return 0;
}