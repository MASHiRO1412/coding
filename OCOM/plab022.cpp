/*
TASK: plab022.cpp , 750
LANG: C++
AUTHOR: Jirapat Jomtong
CENTER: KKU016
*/
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int main()
{
    int a = input();
    char o = input<char>();
    int b = input();
    if (o == '+')
        cout << a + b;
    else if (o == '-')
        cout << a - b;
    else if (o == '/')
        cout << a / b;
    else
        cout << a * b;
    return 0;
}
