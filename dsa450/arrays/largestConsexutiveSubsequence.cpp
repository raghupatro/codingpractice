#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
// brute force solution, try and find O(n) solution
int findLongestConseqSubseq(vector<int> a, int N)
{
    sort(a.begin(), a.end());
    int count = 1, maxCount = 0;
    for (int i = 1; i < N; ++i)
    {
        if (a[i] == a[i - 1] + 1)
        {
            count++;
        }
        else if (a[i] == a[i - 1])
        {
            continue;
        }
        else
        {
            maxCount = max(count, maxCount);
            count = 1;
        }
    }
    return max(maxCount, count);
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

    vector<int> a{2, 6, 1, 9, 4, 5, 3};
    cout << findLongestConseqSubseq(a, a.size());
    return 0;
}
