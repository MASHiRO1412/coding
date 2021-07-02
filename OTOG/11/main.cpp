#include <bits/stdc++.h>

using namespace std;

struct sc3
{
    int s1,s2,s3;
    sc3(int a, int b, int c)
    {
        s1 = a, s2 = b, s3 = c;
    }
};

vector<int> sc;

vector<sc3> s;

int mi1 = INT_MAX, ma1 = INT_MIN;
int mi2 = INT_MAX, ma2 = INT_MIN;
int mi3 = INT_MAX, ma3 = INT_MIN;
int sum[3], sum1;

void sumfind()
{
    for(int i = 0; i < s.size(); i++)
    {
        sum[0] += s[i].s1;
        sum[1] += s[i].s2;
        sum[2] += s[i].s3;
    }
    for(int i = 0; i < sc.size(); i++)
        sum1 += sc[i];
}

void min_max()
{
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i].s1 < mi1) mi1 = s[i].s1;
        if(s[i].s1 > ma1) ma1 = s[i].s1;
        if(s[i].s2 < mi2) mi2 = s[i].s2;
        if(s[i].s2 > ma2) ma2 = s[i].s2;
        if(s[i].s3 < mi3) mi3 = s[i].s3;
        if(s[i].s3 > ma3) ma3 = s[i].s3;
    }
}

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        sc.push_back(temp);
    }
    cin>> n;
    for(int i = 0; i < n; i++)
    {
        int t1,t2,t3;
        cin >> t1 >> t2 >> t3;
        s.push_back(sc3(t1,t2,t3));
    }
    min_max();
    sumfind();
    cout << "==========" << endl;
    cout << (double)sum1 / sc.size() << endl;
    cout << "==========" << endl;
    cout << (double)sum[0] / s.size() << " " << (double)sum[1] / s.size() << " " << (double)sum[2] / s.size() << endl;
    cout << mi1 << " " << mi2 << " " << mi3 << endl;
    cout << ma1 << " " << ma2 << " " << ma3 << endl;
    return 0;
}
