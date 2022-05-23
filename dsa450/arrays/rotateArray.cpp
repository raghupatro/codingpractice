#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void rotate(vector<int> &v, int n)
{
    // 1 2 3 4 5
    // 3 4 5 1 2
    int temp = v[v.size() - 1];
    for (int i = v.size() - 1; i > 0; --i)
    {
        v[i] = v[i - 1];
    }
    v[0] = temp;

    if (n - 1 == 0)
        return;
    else
        rotate(v, n - 1);
}
void rotate1(vector<int> &v, int k)
{ // write optimised solution
    int n = v.size();
    int temp = v[0];
    int i = 0;
    do
    {
        int j = (i + k) % n;
        int temp1 = v[j];
        v[j] = temp;
        temp = temp1;
        i = j;
    } while (i != 0);
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

    vector<int> v{1, 2, 3, 4, 5};
    rotate1(v, 2);
    for (int i : v)
    {
        cout << i << "\t";
    }
    return 0;
}
