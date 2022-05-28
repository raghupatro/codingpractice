#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
bool subArrayExists(int arr[], int n)
{
    // agar abhi tk ka sum = wo jo subset hai, uske pehle ka sum
    // to pta chl jaega ki 0 sum ka ek subset hai
    // pehle tk ke saare sums map me add krlo, har iteration pe check krlo

    int sum = 0;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == 0 || m[sum] || arr[i] == 0)
        {
            return 1;
        }
        else
            m[sum] = 1;
    }

    return 0;
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
