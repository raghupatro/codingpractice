#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int maxArea(vector<int> &height)
{
    int maxArea = 0;

    for (int i = 0; i < height.size(); ++i)
    {
        for (int j = i + 1; j < height.size(); ++j)
        {
            maxArea = max(maxArea, (min(height[j], height[i]) * abs(i - j)));
        }
    }
    return maxArea;
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
    cout << maxArea(nums) << endl;
    return 0;
}
