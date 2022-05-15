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
void swap(vector<int> &nums, int i, int j)
{
    int temp = nums[j];
    nums[j] = nums[i];
    nums[i] = temp;
}
void moveZeroes(vector<int> &nums)
{
    int k = 0;
    if (nums[0] != 0)
        k++;
    for (int i = 1; i < nums.size(); ++i)
    {
        if (nums[i] != 0)
        {
            swap(nums, i, k);
            k++;
        }
    }
}