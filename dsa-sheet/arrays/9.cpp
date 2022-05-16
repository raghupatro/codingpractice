#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int maxProfit(vector<int> &prices)
{
    int min = prices[0], max = prices[0], res = 0;
    // 7 1 5 3 6 4
    for (int &i : prices)
    {
        if (i < max)
        {
            res += (max - min);
            min = i;
            max = i;
        }
        if (i >= max)
        {
            max = i;
        }
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

    vector<int> nums;
    while (cin)
    {
        int i = 0;
        cin >> i;
        nums.push_back(i);
    }
    cout << maxProfit(nums) << endl;
    return 0;
}
