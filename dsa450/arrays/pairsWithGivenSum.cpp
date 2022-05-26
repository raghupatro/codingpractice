#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int getPairsCountBruteForce(vector<int> &a, int k)
{
    int count = 0;
    for (int i = 0; i < a.size(); ++i)
    {
        for (int j = i + 1; j < a.size(); ++j)
        {
            if (a[i] + a[j] == k)
                count++;
        }
    }
    return count;
}
int getPairsCount(vector<int> &a, int k)
{
    int count = 0;
    map<int, int> table;
    for (const int &i : a)
    {
        table[i]++;
        if (table.find(k - i) != table.end())
        {
            count += table[k - i];
            if (i == k - i)
                count--;
        }
    }
    return count;
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

    vector<int> a{1, 5, 7, 1};
    cout << getPairsCount(a, 6);
    return 0;
}
