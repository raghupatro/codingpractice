#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int getMinDiff(int arr[], int n, int k)
{
    // code here

    sort(arr, arr + n);
    int maxH = arr[n - 1];
    int minH = arr[0];
    int res = maxH - minH;
    for (int i = 1; i < n; i++)
    {

        maxH = max(arr[n - 1] - k, arr[i - 1] + k);
        minH = min(arr[0] + k, arr[i] - k);

        if (minH < 0)
            continue;

        res = min(res, maxH - minH);
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

    int a[] = {2, 6, 3, 4, 7, 2, 10, 3, 2, 1};
    // int a[] = {3, 9, 12, 16, 20};
    cout << getMinDiff(a, 10, 3);
    return 0;
}
