/*
TASK: plab025.cpp , 751
LANG: C++
AUTHOR: Jirapat Jomtong
CENTER: KKU016
*/
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }

int n, q;
string a, b;
int x[3];
int mi = INT_MAX;

int main()
{
    cin >> a;
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] == 'O') 
            x[0]++;
        else if(a[i] == 'T') 
            x[1]++;
        else if(a[i] == 'G') 
            x[2]++;
    }
    x[0] = x[0] / 2;
    for(int i = 0; i < 3; i++)
    {
        if(x[i] < mi) mi = x[i];
    }
    cout << mi;
    //cout << o << " " << t << " " << g << endl;
    return 0;
}