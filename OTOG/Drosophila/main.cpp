#include <bits/stdc++.h>

using namespace std;

struct pa
{
    int x,y,cou;
    pa(int a,int b,int c)
    {
        x = a;
        y = b;
        cou = c;
    }
};

queue<pa> q;

char ma[100][100];

vector<char> door;

int coun = INT_MAX;

int xmove[] = {-1,1,0,0};
int ymove[] = {0,0,-1,1};

int check[100][100];

int main()
{
    int m,n,x,y;
    cin >> n >> m;
    cin >> y >> x;
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> ma[i][j];
    q.push(pa(x,y,0));
    check[x][y] = 1;
    while(!q.empty())
    {
        if(ma[q.front().x][q.front().y] >= 'A' && ma[q.front().x][q.front().y] <= 'z')
        {
            coun = q.front().cou;
            if(q.front().cou <= coun)
                door.push_back(ma[q.front().x][q.front().y]);
        }
        if(q.front().cou+1 <= coun)
        {
            for(int i = 0; i < 4; i++)
            {
                if(q.front().x+xmove[i] < n || q.front().x+xmove[i] >= 0 || q.front().y+ymove[i] >= 0 || q.front().y+ymove[i] < m)
                    if(ma[q.front().x+xmove[i]][q.front().y+ymove[i]] != '1' && check[q.front().x+xmove[i]][q.front().y+ymove[i]] != 1)
                    {
                        q.push(pa(q.front().x+xmove[i],q.front().y+ymove[i],q.front().cou+1));
                        check[q.front().x+xmove[i]][q.front().y+ymove[i]] = 1;
                    }
            }
        }
        q.pop();
    }
    sort(door.begin(),door.end());
    for(int i = 0; i < door.size(); i++)
    {
        if(i != door.size()-1)cout << door[i] << endl;
        else cout << door[i];
    }
    return 0;
}

