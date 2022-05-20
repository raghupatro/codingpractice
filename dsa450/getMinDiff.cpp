#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int getMinDiff(int arr[], int n, int k)
{
    // code here
    int minDiff = INT_MIN;
    sort(arr, arr + n);
    int lo = 0, hi = n - 1;
    while (hi > lo)
    {
        int currVal = arr[hi] - arr[lo];
        if (arr[hi] - k > 0)
        {
            currVal = min(currVal, abs(arr[hi] - arr[lo] - k - k));
        }
        if (currVal > minDiff)
        {
            minDiff = currVal;
        }
        hi--;
        lo++;
    }
    return minDiff;
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

    int a[] = {2, 6, 3, 4, 7, 2, 10, 3, 2, 1};
    // int a[] = {3, 9, 12, 16, 20};
    cout << getMinDiff(a, 10, 5);
    return 0;
}
