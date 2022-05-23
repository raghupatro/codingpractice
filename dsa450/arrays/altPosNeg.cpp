#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve(vector<int> &v)
{
    if (v.size() < 3)
        return;
    int pos = 0, neg = 0, curr = 0;
    while (curr < v.size())
    {
        if (v[curr] < 0)
        {
            swap(v[curr], v[neg]);
            neg++;
        }
        // also think of something to alternate pos and neg..
    }
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
    vector<int> a{1, 2, 3, -4, -1, 4};
    solve(a);
    for (const int &i : a)
    {
        cout << i << "\t";
    }
    cout << endl;
    return 0;
}
