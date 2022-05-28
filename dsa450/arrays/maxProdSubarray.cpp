#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
long long maxProduct(vector<int> arr, int n)
{
    long long int maxProd = INT_MIN;
    long long int currProd = 1;
    int count = 0;
    // count of -ve numbers
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            count++;
    }
    int k = count;
    for (int i = 0; i < n; i++)
    {
        if (currProd == 0)
            currProd = 1;
        if (arr[i] < 0)
            k--;
        currProd *= arr[i];
        if (currProd > maxProd)
            maxProd = currProd;
        if (currProd < 0 && k == 0)
            currProd = 1;
    }
    currProd = 1;
    k = count;
    for (int i = n - 1; i >= 0; i--)
    {
        if (currProd == 0)
            currProd = 1;
        if (arr[i] < 0)
            k--;
        currProd *= arr[i];
        if (currProd > maxProd)
            maxProd = currProd;
        if (currProd < 0 && k == 0)
            currProd = 1;
    }
    return maxProd;
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

        return 0;
}
