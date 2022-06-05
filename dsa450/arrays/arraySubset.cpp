#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
string isSubset(vector<int> a1, vector<int> a2)
{
    int n = a1.size();
    int m = a2.size();
    int j = 0;
    sort(a1.begin(), a1.end());
    sort(a2.begin(), a2.end());
    for (int i = 0; i < n; ++i)
    {
        if (j < m and a1[i] == a2[j])
        {
            j++;
        }
        if (i == n - 1 and j == m)
            return "Yes";
    }
    return "No";
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

    vector<int> a1{10, 5, 2, 23, 19};
    vector<int> a2{19, 5, 3};
    cout << isSubset(a1, a2);
    return 0;
}
