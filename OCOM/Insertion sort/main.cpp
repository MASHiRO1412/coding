#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[10] = {9, 6, 3, 7, 8, 1, 4, 2, 5, 0}, key;
    for(int i = 1; i < 10; i++)
    {
        key = a[i];
        for(int j = i - 1; j >= 0; j--)
        {
            if(a[j] > key)
            {
                a[j + 1] = a[j];
                a[j] = key;
            }
            else break;
        }
    }
    for(int i = 0; i < 10; i++)
        cout << a[i] << endl;
    return 0;
}
