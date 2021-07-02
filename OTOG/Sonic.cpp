#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
template<typename T = int>
T input(){return *istream_iterator<T>(cin);}
int main()
{
    int n = input();
    for(int i = 0; i < n; i++)
    {
        string s = input<string>();
        int sum = 0;
        int cnt = 26, CNT = 26;
        for(int j = 0; j < s.size(); j++)
        {
            if((int)s[i] >= 97 && (int)s[i] <= 122)
            {
                sum += cnt;
                if(cnt != 1) cnt--;
                else cnt -= 2;
            }
            else
            {
                sum += CNT;
                if(CNT != 1) CNT--;
                else CNT-=2;
            }
        }
        cout << sum << endl;
    }
    return 0;
}