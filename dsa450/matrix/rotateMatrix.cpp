#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void printMatrix(vector<vector<int>> &arr)
{
    int N = arr.size();
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << arr[i][j] << "\t";
        cout << endl;
    }
    cout << endl;
}
void rotate90Clockwise(vector<vector<int>> &m)
{
    int shellLim = m.size() / 2;
    int shellNo = 0;
    int temp = 0;
    int n = m.size();

    while (shellNo <= shellLim)
    {
        // p is the pos in the shell being swapped
        for (int p = shellNo; p < n - 1 - shellNo; ++p)
        {
            // saving 1
            temp = m[shellNo][p];
            // swap 1 with 7
            m[shellNo][p] = m[n - 1 - p][shellNo];
            // swap 7 with 9
            m[n - 1 - p][shellNo] = m[n - 1 - shellNo][n - 1 - p];
            // swap 9 with 3
            m[n - 1 - shellNo][n - 1 - p] = m[p][n - 1 - shellNo];
            // save 1(temp) at position of 3
            m[p][n - 1 - shellNo] = temp;

            // // debug
            // cout << "shellNo = " << shellNo << "\t p = " << p << endl;
            // printMatrix(m);
        }
        shellNo++;
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
    vector<vector<int>> m{{1, 2, 3, 4},
                          {5, 6, 7, 8},
                          {9, 10, 11, 12},
                          {13, 14, 15, 16}};
    printMatrix(m);
    rotate90Clockwise(m);
    printMatrix(m);
    return 0;
}
