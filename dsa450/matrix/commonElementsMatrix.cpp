#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
vector<int> commons(vector<vector<int>> &m)
{
    vector<int> ans;
    unordered_map<int, set<int>> map;
    for (int i = 0; i < m.size(); ++i)
    {
        for (int j = 0; j < m[0].size(); ++j)
        {
            map[m[i][j]].insert(i);
        }
    }
    for (auto it : map)
    {
        if (it.second.size() == m.size())
        {
            ans.push_back(it.first);
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("d:\\cp\\codingpractice\\input.txt", "r", stdin);
    freopen("d:\\cp\\codingpractice\\output.txt", "w", stdout);
#endif

    vector<vector<int>> m{
        {1, 2, 1, 4, 8},
        {3, 7, 8, 5, 1},
        {8, 7, 7, 3, 1},
        {8, 1, 2, 7, 9},
    };
    vector<int> a = commons(m);
    for (int i : a)
    {
        cout << i << "\t";
    }
    cout << endl;
    return 0;
}
