#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void nextPermutation(vector<int> &nums)
{
    // 1 3 5
    // 1 5 3
    // 1 5 3
    // 3 1 5
    // 1 2 1 3 2 -1
    // 1 2 3 4 3 2 1
    int n = nums.size(), i = n - 2;
    while (i >= 0)
    {
        if (nums[i] < nums[i + 1])
            break;
        i--;
    }
    // i is the index of the element right of which the array is reverse sorted
    reverse(nums.begin() + i + 1, nums.end());
    if (i < 0) // if i was -1, i.e. the entire array was reverse sorted
        return;
    int j = i + 1;
    // search in the newly reversed sorted array for an element larger than nums[i], and swap it
    for (j; j < n; j++)
    {
        if (nums[j] > nums[i])
        {
            swap(nums[i], nums[j]);
            return;
        }
    }
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

    vector<int> a{1, 2, 1, 3, 2, -1};
    nextPermutation(a);
    for (const int &i : a)
    {
        cout << i << "\t";
    }
    return 0;
}
