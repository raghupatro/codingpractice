#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int maxAreaNaive(vector<int> &height)
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
int maxArea1(vector<int> &height)
{
    int l = 0, r = height.size() - 1;
    int max = INT_MIN;
    while (l < r)
    {
        int currArea = min(height[l], height[r]) * abs(l - r);
        int currLwall = height[l];
        int currRwall = height[r];
        if (currArea > max)
        {
            max = currArea;
        }
        bool changedOne = false;
        while (height[l] <= currLwall)
        {
            changedOne = true;
            ++l;
        }
        while (!changedOne && height[r] <= currRwall)
            --r;
    }
    return (max < 0) ? 0 : max;
}
int maxArea(vector<int> &height)
{
    int l = 0, r = height.size() - 1;
    vector<int> L{height[l]};
    vector<int> R{height[r]};
    int maxArea = INT_MIN;
    while (l < r)
    {
        int currLwall = height[l];
        int currRwall = height[r];
        while (height[l] <= currLwall)
        {
            ++l;
        }
        L.push_back(l);
        while (height[r] <= currRwall)
        {
            --r;
        }
        R.push_back(r);
    }
    for (int i = 0; i < L.size(); ++i)
    {
        for (int j = 0; j < R.size(); ++j)
        {
            int currArea = min(height[L[i]], height[R[j]]) * abs(L[i] - R[j]);
            if (currArea > maxArea)
                maxArea = currArea;
            if (height[L[i]] < height[R[j]])
                break;
        }
    }
    return (maxArea < 0) ? 0 : maxArea;
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
    // 1,8,6,2,5,4,8,3,7
    vector<int> nums{1, 8, 6, 2, 5, 4, 8, 3, 7};
    // while (cin)
    // {
    //     int i = 0;
    //     cin >> i;
    //     nums.push_back(i);
    // }
    cout << maxArea(nums) << endl;
    return 0;
}
