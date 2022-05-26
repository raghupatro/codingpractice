#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    vector<vector<int>> res;
    if (intervals.size() == 0)
    {
        return res;
    }
    sort(intervals.begin(), intervals.end());

    vector<int> ds = intervals[0];

    for (auto it : intervals)
    {
        if (it[0] <= ds[1])
        {
            ds[1] = max(ds[1], it[1]);
        }
        else
        {
            res.push_back(ds);
            ds = it;
        }
    }
    res.push_back(ds);
    return res;
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

    vector<vector<int>> intervals{{1, 3}, {2, 7}, {8, 10}, {15, 18}};
    vector<vector<int>> v = merge(intervals);
    for (int i = 0; i < v.size(); ++i)
    {

        cout << v[i][0] << "\t" << v[i][1] << endl;
    }
    return 0;
}
