#include <bits/stdc++.h>

using namespace std;

int a[10] = {9, 6, 3, 7, 8, 1, 4, 2, 5, 0}, flag = 0, in;

int main()
{
    while(flag < 10)
    {
        int mi = INT_MIN;
        for(int i = flag; i < 10; i++)
            if(a[i] > mi)
            {
                in = i;
                mi = a[i];
            }
        int temp = a[flag];
        a[flag] = a[in];
        a[in] = temp;
        flag++;
    }
    for(int i = 0; i < 10; i++)
        cout << a[i] << endl;
    return 0;
}
