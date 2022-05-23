#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void swap(vector<int> &v, int curr, int l)
{
    int temp = v[l];
    v[l] = v[curr];
    v[curr] = temp;
}
void solve(vector<int> &v)
{
    int l = 0, curr = 0;
    while (curr < v.size())
    {
        if (v[curr] < 0)
        {
            swap(v, curr, l);
            l++;
        }
        curr++;
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

    vector<int> nums{-12, 11, -13, -5, 6, -7, 5, -3, -6};
    solve(nums);
    for (int i : nums)
    {
        cout << i << "\t";
    }
    return 0;
}
