#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n, nq;
vector<int> v[2000];
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int main()
{
    int n = input();
    int nq = input();
    for(int i = 0; i < n; i++)
    {
        int q = input();
        for(int j = 0; j < q; j++) v[i].push_back(input());
        sort(v[i].begin(), v[i].end());
    } 
    for(int i = 0; i < nq; i++)
    {
        int a = input();
        char s = input<char>();
        int b = input();
        vector<int> t;
        if(s == 'U')
        {
            set_union(v[a - 1].begin(), v[a - 1].end(), v[b - 1].begin(), v[b - 1].end(), back_inserter(t));
            sort(t.begin(), t.end());
            for(auto e : t)
                cout << e << " ";
            cout << endl;
        }
        else if (s == '|')
        {
            set_intersection(v[a - 1].begin(), v[a - 1].end(), v[b - 1].begin(), v[b - 1].end(), back_inserter(t));
            sort(t.begin(), t.end());
            if(!t.empty())
            {
                for (auto e : t)
                    cout << e << " ";
                cout << endl;
            }
            else cout << "Empty" << endl;
        }
        else if (s == '-')
        {
            set_difference(v[a - 1].begin(), v[a - 1].end(), v[b - 1].begin(), v[b - 1].end(), back_inserter(t));
            sort(t.begin(), t.end());
            if (!t.empty())
            {
                for (auto e : t)
                    cout << e << " ";
                cout << endl;
            }
            else
                cout << "Empty" << endl;
        }
    }
    return 0;
}