#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int doUnion(int a[], int n, int b[], int m)
{
    // code here
    unordered_set<int> s;
    for (int i = 0; i < n; ++i)
    {
        s.insert(a[i]);
    }
    for (int i = 0; i < m; ++i)
    {
        s.insert(b[i]);
    }
    return s.size();
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
