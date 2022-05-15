#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
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

    ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); ++i)
    {
        if (m.find(nums[i]) == m.end())
        {
            m[nums[i]] = i;
        }
        if (m.find(target - nums[i]) != m.end() && m[target - nums[i]] != i)
        {
            return vector<int>{i, m[target - nums[i]]};
        }
    }
    return vector<int>{0};
}