#include <bits/stdc++.h>

using namespace std;

int n,sumodd,odd,sumeven,even,temp;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        if(temp%2){sumodd += temp; odd++;}
        else{sumeven += temp; even++;}
    }
    string choose; cin >> choose;
    if(choose == "even") cout << sumeven << " " << even;
    else cout << sumodd << " " << odd;
    return 0;
}
