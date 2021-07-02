#include <bits/stdc++.h>

using namespace std;

struct person{
    string name;
    string no;
};
struct cat{
    string catname;
    person owner;
};

int main()
{
    person John = { "John", "094333333"};
    cat c1 = {"momo",John};
    cout << c1.catname << " " << c1.owner.name << " " << c1.owner.no << endl;
    return 0;
}
