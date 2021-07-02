#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[10] = {9, 6, 3, 7, 8, 1, 4, 2, 5, 0}, flag = 0, n = 10;
    while(flag < 10)
        for(int i = 0; i < 10;i++)
        {
            if(a[i] > a[i + 1] && i + 1 < n)
            {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                flag = 0;
            }
            else flag++;
        }
    for(int i = 0; i < 10; i++)
        cout << a[i] << endl;
    return 0;
}
