#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void merge(int arr1[], int arr2[], int n, int m)
{
    sort(arr1, arr1 + n, greater<int>());
    sort(arr2, arr2 + m);
    int i = 0;
    int j = 0;
    while (i < n and j < m)
    {
        if (arr1[i] > arr2[j])
        {
            swap(arr1[i], arr2[j]);
            i++;
            j++;
            continue;
        }
        else
            i++;
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
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
