#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
vector<int> findDuplicate(vector<int> &nums)
{
    unordered_set<int> s;
    vector<int> v;
    for (int &i : nums)
    {
        if (s.find(i) == s.end())
            s.insert(i);
        else
            v.push_back(i);
    }
    return v;
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

    vector<int> nums;
    while (cin)
    {
        int i = 0;
        cin >> i;
        nums.push_back(i);
    }
    for (int &i : findDuplicate(nums))
    {
        cout << i << "\t";
    }
    return 0;
}
