#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int maxProfit(vector<int> &price)
{
    int first_buy = INT_MIN;
    int first_sell = 0;
    int second_buy = INT_MIN;
    int second_sell = 0;

    for (int i = 0; i < price.size(); i++)
    {

        first_buy = max(first_buy, -price[i]);
        // we set prices to negative, so the calculation of profit will be convenient
        first_sell = max(first_sell, first_buy + price[i]);
        second_buy = max(second_buy, first_sell - price[i]);
        // we can buy the second only after first is sold
        second_sell = max(second_sell, second_buy + price[i]);
    }
    return second_sell;
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

    vector<int> a{10, 22, 5, 75, 65, 80};
    cout << maxProfit(a);
    return 0;
}
