/*#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template<typename T = int>
T input(){return *istream_iterator<T>(cin);}

vector<int> v;

int main()
{
    int n = input();  // int n; cin >> n;
    for(int i = 0; i < n; i++) v.push_back(input()); // int t; cin >> t; v.push_back(t)
    auto comp = [](int l, int r)
    {
        if(l % 2 == 0 && r % 2 == 1) return true;
        else if (l % 2 == 0 && r % 2 == 0) return l < r;
        else if (l % 2 == 1 && r % 2 == 0) return false;
        else if (l % 2 && r % 2) return l > r; 
    };
    sort(v.begin(), v.end(), comp);
    for(int e : v) cout << e << " ";
}*/
#include <bits/stdc++.h>
using namespace std;
long n, x;
vector<long> veven, vodd;

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x % 2 == 0) veven.push_back(x);
        else vodd.push_back(x);
    }
    sort(veven.begin(), veven.end());
    sort(vodd.begin(), vodd.end(), greater<long>());
    for (auto ve = veven.begin(); ve != veven.end(); ve++) cout << *ve << " ";
    for (auto vo = vodd.begin(); vo != vodd.end(); vo++) cout << *vo << " ";
    return 0;
}
