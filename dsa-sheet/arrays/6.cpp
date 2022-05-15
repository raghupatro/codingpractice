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
int maxProfit(vector<int> &prices)
{
    int min = prices[0], max = prices[0], maxprof = 0;
    for (int &i : prices)
    {
        if (i < min)
        {
            min = i;
            max = i;
        }
        if (i > max)
        {
            max = i;
        }
        maxprof = (max - min) > maxprof ? (max - min) : maxprof;
    }
    return maxprof;
}