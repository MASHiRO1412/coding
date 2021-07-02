#include <bits/stdc++.h>

using namespace std;

vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int main()
{
    auto it = find_if(v.begin(),v.end(),[](int &val){return val%2 == 1;});
    if(it != v.end())
        cout << "First Odd Is : " << *it << endl;
    else
        cout << "Odd not found" << endl;
    return 0;
}
