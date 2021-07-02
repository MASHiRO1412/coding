#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
//int n, q, cnt, mit, mat;
//int nowf, ncnt = 0, mif = INT_MAX, maf = INT_MIN;
//char pre;
//vector<string> v;
int n;
int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string t = input<string>();
        map<char, int> m;
        for(int i = 0; i < t.size(); i++)
        {
            m[t[i]]++;
        }
    }
    /*for(int i = 0; i < n; i++) 
    {
        v.push_back(input<string>());
        sort(v[i].begin(), v[i].end());
        ncnt = 0; 
        mif = INT_MAX; 
        maf = INT_MIN;
        for(int j = 0; j < v[i].size(); j++)
        {
            if(j == 0)
            {
                pre = v[i][j];
                nowf = 1;
                ncnt++;
                continue;
            }
            if(pre == v[i][j]) nowf++;
            else 
            {
                pre = v[i][j];
                ncnt++;
                if(nowf > maf) maf = nowf;
                if(nowf < mif) mif = nowf;
                nowf = 1;
            }
        }
        if(nowf > maf) maf = nowf;
        if(nowf < mif) mif = nowf;
        if(ncnt == 1) mif = maf;
        cout << ncnt << " " << maf << " " << mif << endl;
    }*/
    return 0;
}