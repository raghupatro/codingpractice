#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void swap(vector<int> &a, int i, int j)
{
    int temp = a[j];
    a[j] = a[i];
    a[i] = temp;
}
void sort012(vector<int> &a, int n)
{
    int lo = 0, hi = n - 1, curr = 0;
    while (curr <= hi)
    {
        switch (a[curr])
        {
        case 0:
            swap(a, curr, lo);
            curr++;
            lo++;
            break;
        case 1:
            curr++;
            break;
        case 2:
            swap(a, curr, hi);
            // curr++;
            hi--;
            break;
        }
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

    int n = 0;
    cin >> n;
    vector<int> a(n, 0);
    for (int &i : a)
    {
        cin >> i;
    }

    // int a[] = {0, 2, 1, 2, 0};
    sort012(a, a.size());
    for (int i = 0; i < a.size(); ++i)
    {
        cout << a[i] << "\t";
    }
    return 0;
}
