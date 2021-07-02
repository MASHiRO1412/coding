#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
struct patient
{
    string name;
    int pri;
    int order;
    friend bool operator < (patient a, patient b){return (a.pri == b.pri) ? (a.order > b.order) : (a.pri < b.pri);}
};
string task;
int i = 1;
priority_queue<patient> q;
int main()
{
    ios::sync_with_stdio(false);
    while(i++)
    {
        cin >> task;
        if(task == "New")
            q.push({input<string>(), input(), i});
        else if(task == "Call")
        {
            cout << q.top().name << endl;
            q.pop();
        }
        else if(task == "Exit") break;
    }
    return 0;
}