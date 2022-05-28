#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

vector<int> factorial(int N)
{
    vector<int> v, v1;
    v.push_back(1);
    long long num, carry = 0;

    for (int i = 1; i <= N; i++)
    {
        carry = 0;
        for (int j = v.size() - 1; j > 0; j--)
        {
            num = v[j] * i + carry;
            v1.push_back(num % 10);
            carry = num / 10;
        }
        long long a = v[0] * i + carry;
        while (a >= 10)
        {
            v1.push_back(a % 10);
            a = a / 10;
        }
        v1.push_back(a);
        v.clear();
        reverse(v1.begin(), v1.end());
        v = v1;
        v1.clear();
    }
    return v;
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

    vector<int> v = factorial(4);
    for (int i : v)
        cout << i;
    return 0;
}
