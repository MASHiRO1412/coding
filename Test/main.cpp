#include <bits/stdc++.h>

using namespace std;

struct node
{
    int to,w;
    node(int a, int b)
    {
        to = a;
        w = b;
    }
};

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}
