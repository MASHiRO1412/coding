#include <bits/stdc++.h>

using namespace std;

struct p1{
    int x;
    int y;
};

void swapref(p1 &p)
{
    int temp;
    temp = p.x;
    p.x = p.y;
    p.y = temp;
}

void swappoint(p1 *q)
{
    int temp;
    temp = q -> x;
    q -> x = q -> y;
    q -> y = temp;
}

int main()
{
    p1 p, q;
    p.x = 1;
    p.y = 2;
    q = p;
    cout << p.x << " " << p.y << endl << q.x << " " << q.y << endl;
    swapref(p);
    swappoint(&q);
    cout << p.x << " " << p.y << endl << q.x << " " << q.y << endl;
    return 0;
}
