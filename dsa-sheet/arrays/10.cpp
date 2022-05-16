#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int findSum(vector<int> &nums, int i, int j)
{
    int sum = 0;
    for (int p = i; p < i + j; ++p)
    {
        sum += nums[i];
    }
    return sum;
}
int subarraysDivByK(vector<int> &nums, int k)
{
    // int temp[] = {0};
    // int *temp = &nums[0];

    int count = 0;
    for (int i = 0; i < nums.size(); ++i)
    {
        for (int j = 0; j < nums.size() - i; ++j)
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

    vector<int> nums;
    int k = 0;
    cin >> k;
    while (cin)
    {
        int i = 0;
        cin >> i;
        nums.push_back(i);
    }

    cout << subarraysDivByK(nums, k) << endl;
    return 0;
}
