/*
TASK: plab021.cpp , 749
LANG: C++
AUTHOR: Jirapat Jomtong
CENTER: KKU016
*/
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int main()
{
    int n = input();
    for (int i = 0; i < n; i++)
    {
        long long w = input();
        long long l = input();
        cout << w * l << endl;
    }
    return 0;
}
