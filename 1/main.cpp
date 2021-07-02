#include <bits/stdc++.h>

using namespace std;

int main()
{
    float a, b, c ,d ,e , ma = 0 , mi = 99999;
    int choice;
    cin >> a >> b >> c >> d >> e;
    cin >> choice;

    if(ma < a)ma = a;
    if(mi > a)mi = a;

    if(ma < b)ma = b;
    if(mi > b)mi = b;

    if(ma < c)ma = c;
    if(mi > c)mi = c;

    if(ma < d)ma = d;
    if(mi > d)mi = d;

    if(ma < e)ma = e;
    if(mi > e)mi = e;

    switch(choice)
    {
        case 1 : cout << ma << endl; break;
        case 2 : cout << mi << endl; break;
        case 3 : cout << (a+b+c+d+e)/5 << endl; break;
    }
    return 0;
}
