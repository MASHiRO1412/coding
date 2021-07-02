#include<bits/stdc++.h>
using namespace std;

int n,na,arr[50000],key,s=0,in=0,chk[50000],index;

int binarySearch(int l, int h, int x)
{
    int mid = (h + l)/2;
    if(x == arr[l])
        return l;
    else if(x == arr[h])
        return h;
    else if(arr[mid] == x && h > l)
        return mid;
    else if(arr[mid] > x)
        return binarySearch(l, mid - 1, x);
    else if(arr[mid] < x)
        return binarySearch(mid + 1, h, x);
    else if(x > arr[0] || x < arr[n - 1] || l == h - 1)
        return -1;

}

int main()
{
    cin >> n;
    for(int i=0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr+n, greater<int>());
    cin >> na;
    for(int i = 0; i < na; i++)
        cin >> chk[i];
    for(int i = 0; i < na; i++)
    {
        if(binarySearch(0, n - 1, chk[i]) != -1)
        {
            s++;
            in = in + index + 1;
        }
    }
    cout << s << " " << in;
    return 0;
}
