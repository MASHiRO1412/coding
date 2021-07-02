#include <bits/stdc++.h>

using namespace std;

string name[1000], surname[1000], searchname[1000], searchsurname[1000];
int score[1000];
int n, q;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> name[i] >> surname[i] >> score[i];
    cin >> q;
    for(int i = 0; i < q; i++)
        cin >> searchname[i] >> searchsurname[i];
    for(int i = 0; i < q; i++)
        for(int j = 0; j < n; j++)
            if(searchsurname[i] == surname[j] && searchname[i] == name[j])
            {
                if(score[j] < 50)
                    cout << name[j] << " " << surname[j] << " " << score[j] << " F\n";
                else if(score[j] < 60)
                    cout << name[j] << " " << surname[j] << " " << score[j] << " D\n";
                else if(score[j] < 70)
                    cout << name[j] << " " << surname[j] << " " << score[j] << " C\n";
                else if(score[j] < 80)
                    cout << name[j] << " " << surname[j] << " " << score[j] << " B\n";
                else
                    cout << name[j] << " " << surname[j] << " " << score[j] << " A\n";
                break;
            }
    return 0;
}
