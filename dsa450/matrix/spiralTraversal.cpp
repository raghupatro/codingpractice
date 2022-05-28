#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

vector<int> spirallyTraverse(vector<vector<int>> matrix, int r, int c)
{
    vector<int> ans;
    int left = 0;
    int top = 0;
    int right = c - 1;
    int bottom = r - 1;
    while (1)
    {
        // top
        for (int i = left; i <= right; i++)
            ans.push_back(matrix[top][i]);
        top++;
        if (top > bottom)
            break;
        // right
        for (int j = top; j <= bottom; j++)
            ans.push_back(matrix[j][right]);
        right--;
        if (left > right)
            break;
        // bottom
        for (int i = right; i >= left; i--)
            ans.push_back(matrix[bottom][i]);
        bottom--;
        if (top > bottom)
            break;
        // left
        for (int j = bottom; j >= top; j--)
            ans.push_back(matrix[j][left]);
        left++;
        if (left > right)
            break;
    }
    return ans;
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

    vector<vector<int>> matrix{{1, 2, 3, 4},
                               {5, 6, 7, 8},
                               {9, 10, 11, 12}};

    vector<int> m = spirallyTraverse(matrix, 3, 4);
    for (int i : m)
    {
        cout << i << "\t";
    }
    return 0;
}
