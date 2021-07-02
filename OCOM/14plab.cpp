#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

template <typename T = int>
T input(){return *istream_iterator<T>(cin);}

vector<pair<int, string>> v;
pair<int, string> key;

int main()
{
    int n = input();
    for(int i = 0; i < n; i++) v.push_back({input(), input<string>()});
    sort(v.begin(), v.end());
    key = {input(), input<string>()};
    cout << (binary_search(v.begin(), v.end(), key) ? "Found" : "Not Found");
    return 0;
}