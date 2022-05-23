#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int minJumps(vector<int> arr, int n)
{
    // Your code here
    int minJumps = 0;
    int i = 0;
    while (i < n)
    {
        if (arr[i] == 0)
        {
            if (i != n - 1)
                return -1;
            else
                return minJumps;
        }
        int idxmaxinrange = i + arr[i];
        if (idxmaxinrange >= n - 1)
            return minJumps + 1;
        for (int j = i + 1; j < i + arr[i]; ++j)
        {
            if (arr[j] + j > arr[idxmaxinrange] + idxmaxinrange)
                idxmaxinrange = j;
        }
        i = idxmaxinrange; // write correct soln here

        minJumps++;
    }
    return minJumps;
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
    vector<int> a(11, 0);
    for (int &i : a)
    {
        cin >> i;
    }
    cout << minJumps(a, a.size());
    return 0;
}
