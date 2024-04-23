#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;
    int a, b;
    vector<int> dragonsStrength(n);
    vector<int> bonus(n);
    vector<pair<int, int>> dungeon(n);
    bool isKiritoDead = false;

    for (int i = 0; i < n; i++)
    {
        cin >> dragonsStrength[i];
        cin >> bonus[i];

        dungeon[i] = make_pair(dragonsStrength[i], bonus[i]);
    }

    sort(dungeon.begin(), dungeon.end(), [](const pair<int, int> &a, const pair<int, int> &b)
         { if( a.first == b.first) {
             return a.second > b.second;
         }  else {
            return a.first < b.first;
         } });

    for_each(dungeon.begin(), dungeon.end(), [&s, &isKiritoDead](const pair<int, int> &a)
             { if (s <= a.first && !isKiritoDead ){ cout << "NO\n"; isKiritoDead = true; } else { s+= a.second ;} });

    if (!isKiritoDead)
    {
        cout << "YES\n";
    }

    return 0;
}