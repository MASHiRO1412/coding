#include <bits/stdc++.h>

using namespace std;

float sum,root;

int main()
{
    int n;
    cin >> n;
    printf("x    y    z    w\n================\n");
    for(int x = 1; x <= n; x++)
        for(int y = x; y <= n; y++)
            for(int z = y; z <= n; z++)
            {
                sum = x*x + y*y + z*z;
                root = cbrt(sum);
                if(floor(root) == root)
                    printf("%d%5d%5d%5.0f\n",x,y,z,root);
                sum = 0;
            }
    return 0;
}
