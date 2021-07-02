#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

template <typename T = int>
T input(){return *istream_iterator<T>(cin);}

struct stu
{
    int id, score;
};

vector<stu> v;

bool comp(stu a, stu b) { return (a.score == b.score) ? a.id < b.id : a.score < b.score; }
bool bcomp(stu a, stu b){ return (a.score == b.score) ? a.id < b.id : a.score < b.score; }

int main()
{
    int n = input();
    for (int i = 0; i < n; i++) v.push_back({input(), input()});
    stu key = {input(), input()}; 
    sort(v.begin(), v.end(), comp);
    cout << (binary_search(v.begin(), v.end(), key, bcomp) ? "Found" : "Not Found");
    return 0;
}