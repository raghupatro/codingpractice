#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int findDuplicate(vector<int> &nums)
{
    unordered_set<int> s;
    for (int &i : nums)
    {
        if (s.find(i) == s.end())
            s.insert(i);
        else
            return i;
    }
    return 1;
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

    vector<int> nums;
    while (cin)
    {
        int i = 0;
        cin >> i;
        nums.push_back(i);
    }
    cout << findDuplicate(nums) << endl;
    return 0;
}
