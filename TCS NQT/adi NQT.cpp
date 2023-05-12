#include <bits/stdc++.h>
using namespace std;
void solve1()
{
    bool ans = true;
    map<char, int> m1;
    string H, W;
    cin >> H >> W;
    for (char &c : H)
        m1[c]++;
    for (char &c : W)
        m1[c]++;
    int n = 0;
    cin >> n;
    vector<string> v(n);
    for (string &s : v)
        cin >> s;
    for (string s : v)
    {
        map<char, int> m2 = m1;
        for (char c : s)
        {
            m2[c]--;
            if (m2[c] < 0)
            {
                ans = false;
                break;
            }
        }
    }
    if (ans)
        cout << "YES";
    else
        cout << "NO";
}
void solve2()
{
    int n = 0;
    cin >> n;
    vector<int> arr(n);
    for (int &i : arr)
        cin >> i;
    int count = 0;

    // Modulus array to store all elements mod 4
    vector<int> modulus(4, 0);

    // sum to check if given task is possible
    int sum = 0;

    // Loop to store all elements mod 4
    // and calculate sum;
    int i;
    for (i = 0; i < n; i++)
    {
        int mod = arr[i] % 4;
        sum += mod;
        modulus[mod]++;
    }

    // If sum is not divisible by 4,
    // not possible
    if (sum % 4 != 0)
    {
        count = -1;
    }
    else
    {

        // Find minimum of modulus[1] and modulus[3]
        // and increment the count by the minimum
        if (modulus[1] > modulus[3])
        {
            count += modulus[3];
        }
        else
        {
            count += modulus[1];
        }

        // Update the values in modulus array.
        modulus[1] -= count;
        modulus[3] -= count;

        // Use modulus[2] to pair remaining elements.
        modulus[2] += modulus[1] / 2;
        modulus[2] += modulus[3] / 2;

        // increment count to half of remaining
        // modulus[1] or modulus of [3] elements.
        count += modulus[1] / 2;
        count += modulus[3] / 2;

        // increment count by half of modulus[2]
        count += modulus[2] / 2;
    }
    cout << count;
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
    solve2();
    return 0;
}
