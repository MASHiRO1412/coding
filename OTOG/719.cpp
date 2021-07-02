#include <bits/stdc++.h>
#define endl "\n"
#define all(x) (x).begin(), (x).end()
using namespace std;
template <typename T = int>
T input() { return *istream_iterator<T>(cin); }
int number_of_towns, max_followers, now_town, next_town, distance_from_first_town[12350];
pair<int, int> town[12350];
bool flag[12350];
int main()
{
    ios::sync_with_stdio(false);
    cin >> number_of_towns;
    for(int i = 0; i < number_of_towns; i++) town[i] = {input(), input()};
    for(int i = 0; i < number_of_towns - 1; i++)
    {
        int next_max_follower = INT_MIN;
        flag[now_town] = true;
        for(int j = 0; j < number_of_towns; j++)
        {
            if(!flag[j])
            {
                int to_j_town_follower = max(abs(town[now_town].first - town[j].first), abs(town[now_town].second - town[j].second));
                distance_from_first_town[j] = max(distance_from_first_town[j], to_j_town_follower);
                if (distance_from_first_town[j] > next_max_follower)
                {
                    next_town = j;
                    next_max_follower = distance_from_first_town[j];
                }
            }
        }
        now_town = next_town;
        max_followers += next_max_follower;
    }
    cout << max_followers; 
    return 0;
}