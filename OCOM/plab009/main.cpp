#include <bits/stdc++.h>

using namespace std;

vector<int> v;

int n;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string t;
        cin >> t;
        if("v_i_b_a" == t)
        {
            int nn;
            cin >> nn;
            for(int j = 0; j < nn; j++)
            {
                int temp;
                cin >> temp;
                v.push_back(temp);
            }
        }
        else if("v_i_b" == t)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        else if("v_p_f" == t)
            cout << v[0] << endl;
        else if("v_p_l" == t)
            cout << v[v.size() - 1] << endl;
        else if("v_p_a" == t)
        {
            for(int j = 0; j < v.size(); j++)
                cout << v[j] << " ";
            cout << endl;
        }
        else if("v_p_pos" == t)
        {
            int nn;
            cin >> nn;
            cout << v[nn - 1] << endl;
        }
        else if("v_p_size" == t)
            cout << v.size() << endl;
        else if("v_d_b" == t)
            v.pop_back();
    }
    return 0;
}
