#include <bits/stdc++.h>

using namespace std;

string comp(int x,int y)
{
    if(x >= y) return "ME";
    else return "LE";
}

int main()
{
    int x,y;
    cin >> x >> y;
    cout << comp(x,y) << endl;
    return 0;
}
