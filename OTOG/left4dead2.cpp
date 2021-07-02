#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

template <typename T = int>
T input() { return *istream_iterator<T>(cin); }

vector<int> v;

int ft, sum[100200], mul[100200] = {1};

int main()
{
    int n = input(); int nboss = input();
    for(int i = 0; i < n; i++) 
    {
        int temp = input();
        //sum[i] = ((i == 0) ? 1 : (sum[i - 1] * temp) + mul[i - 1]);
        //mul[i] = ((i == 0) ? temp : mul[i - 1] * temp);
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    int ft;
    int i = v[0];
    while(ft != nboss)
    {
        for(int j = 0; j < )
    }
    return 0;
}

