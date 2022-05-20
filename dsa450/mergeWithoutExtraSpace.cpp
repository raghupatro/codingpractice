#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void merge(int arr1[], int arr2[], int n, int m)
{
    // code here
    // heap sort lagana hai...
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

    int n = 4, m = 5;
    int a[] = {1, 3, 5, 7};
    int b[] = {0, 2, 6, 8, 9};
    merge(a, b, n, m);
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
    for (int i = 0; i < m; ++i)
    {
        cout << b[i] << "\t";
    }

    return 0;
}
