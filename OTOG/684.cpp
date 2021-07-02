#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int main()
{
    char c = input<char>();
    if (c == 'x' || c == 'X')
        cout << 6;
    else if (c == 'p' || c == 'P')
        cout << 9;
    else if (c == 'o' || c == 'O')
        cout << 8;
    else if (c == 'n' || c == 'N')
        cout << 12;
    else if (c == 'd' || c == 'D')
        cout << 9;
    else if (c == 'j' || c == 'J')
        cout << 2;
    else if (c == 'a' || c == 'A')
        cout << 8;
    else if (c == 'w' || c == 'W')
        cout << 4;
    else if (c == 'i' || c == 'I')
        cout << 10;
    else if (c == 'n' || c == 'N')
        cout << 12;
    else if (c == 'a' || c == 'A')
        cout << 8;
    else if (c == 'u' || c == 'U')
        cout << 4;
    else if (c == 's' || c == 'S')
        cout << 3;
    else if (c == 'e' || c == 'E')
        cout << 5;
    else if (c == 'r' || c == 'R')
        cout << 9;
    else if (c == 'g' || c == 'G')
        cout << 2;
    else if (c == 'l' || c == 'L')
        cout << 1;
    else if (c == 'y' || c == 'Y')
        cout << 2;
    else if (c == 't' || c == 'T')
        cout << 1;
    else if (c == 'f' || c == 'F')
        cout << 1;
    else if (c == 'c' || c == 'C')
        cout << 1;
    else if (c == 'b' || c == 'B')
        cout << 1;
    return 0;
}