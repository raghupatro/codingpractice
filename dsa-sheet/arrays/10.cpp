#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int findSum(vector<int> &nums, int p, int q)
{
    int sum = 0;
    for (int i = p; i <= q; ++i)
    {
        sum += nums[i];
    }
    return abs(sum);
}
int subarraysDivByK(vector<int> &nums, int k)
{
    int count = 0;
    for (int i = 0; i < nums.size(); ++i)
    {
        for (int j = i; j < nums.size(); ++j)
        {
            if (findSum(nums, i, j) % k == 0)
                count++;
        }
    }
    return count;
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

    // 4, 5, 0, -2, -3, 1
    vector<int> nums{4, 5, 0, -2, -3, 1};
    int k = 5;
    // cin >> k;
    // while (cin)
    // {
    //     int i = 0;
    //     cin >> i;
    //     nums.push_back(i);
    // }

    cout << subarraysDivByK(nums, k) << endl;
    return 0;
}
