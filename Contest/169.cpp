#include <bits/stdc++.h>
#define endl "\n"
#define all(x) (x).begin(), end()
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int n;
string q;
int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    if(n == 1) cout << 'N';
    else
    {
        int b = n / 2, c = 0;
        for(int i = 0; i < n; i++)
        {
            if(i > n / 2) c++;
            for(int j = 0; j < n - (b + c); j++)
            {
                if(j < b) {cout << " ";}
                else if(j < c) cout << " ";
                else if(i == n / 2 and j == n / 2) cout << 'N';
                else if((i + j) % 2 == (n / 2) % 2) cout << '*';
                else if((i + j) % 2 != (n / 2) % 2) cout << '^';
            }
            if(i < n / 2) b--;
            cout << endl;
        }
    }
    return 0;
}