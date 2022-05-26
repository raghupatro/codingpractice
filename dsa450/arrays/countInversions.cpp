#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int countInversionsBruteForce(vector<int> &a)
{
    int count = 0;
    for (int i = 0; i < a.size(); ++i)
    {
        for (int j = i + 1; j < a.size(); ++j)
        {
            if (a[i] > a[j])
                count++;
        }
    }
    return count;
}
int countInversions(vector<int> &a)
{
    int count = 0;
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

    vector<int> a{2, 4, 1, 3, 5};
    cout << countInversions(a);
    return 0;
}
