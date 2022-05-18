#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int maxProfit(vector<int> &prices)
{
    int min = prices[0], max = prices[0], res = 0;
    // 7 1 5 3 6 41
    // cout << prices.size() << endl;
    for (int i = 0; i < prices.size(); ++i)
    {
        if (prices[i] < max)
        {
            res += (max - min);
            min = prices[i];
            max = prices[i];
        }
        if (prices[i] > max)
        {
            max = prices[i];
        }
    }
    // need the below statement in actual solution, but worked without it in some
    // instances because array had an extra 0 at the end, inputting proper array
    // provides correct ans, hence needs the line below
    res += (max - min);
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
    int i = 0;
    // there is some error with this driver code, it automatically takes an extra "0" in input array
    while (cin >> i)
    {
        nums.push_back(i);
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << '"' << nums[i] << '"' << "\t";
    }
    cout << maxProfit(nums) << endl;
    return 0;
}
