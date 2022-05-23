#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    vector<vector<int>> res;
    sort(intervals.begin(), intervals.end());
    int j = 0;
    int i = 0;
    for (i = 0; i < intervals.size(); ++i)
    {
        for (j = i + 1; j < intervals.size(); ++j)
        {
            if (j == intervals.size() - 1 and intervals[j][0] <= intervals[j - 1][1])
            {
                vector<int> a{intervals[i][0], intervals[j][1]};
                res.push_back(a);
                i = j + 1;
                break;
            }
            if (intervals[j][0] > intervals[j - 1][1])
            {
                vector<int> a{intervals[i][0], intervals[j - 1][1]};
                res.push_back(a);
                i = j - 1;
                break;
            }
        }
        if (i == intervals.size() - 1)
            res.push_back(intervals[i]);
    }

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

    vector<vector<int>> intervals{{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> v = merge(intervals);
    for (int i = 0; i < v.size(); ++i)
    {

        cout << v[i][0] << "\t" << v[i][1] << endl;
    }
    return 0;
}
