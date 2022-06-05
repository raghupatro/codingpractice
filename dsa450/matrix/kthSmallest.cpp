#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int kthSmallest(vector<vector<int>> &m, int k)
{
    // Your code here
    for (int i = 0; i < m.size(); ++i)
    {
        for (int j = 0; j < m[0].size(); ++j)
        {
            if (i != m.size() - 1)
            {
                if (m[i][j] > m[i + 1][0])
                {
                    j = m[0].size();
                    k++;
                }
            }
            k--;
            if (!k)
                return m[i][j];
        }
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

    vector<vector<int>> m{{16, 28, 60, 64},
                          {22, 41, 63, 91},
                          {27, 50, 87, 93},
                          {36, 78, 87, 94}};
    cout << kthSmallest(m, 5);
    return 0;
}
