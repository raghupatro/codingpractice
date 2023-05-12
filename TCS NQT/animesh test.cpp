#include <bits/stdc++.h>
using namespace std;
string solve(string A, int B)
{
    if (B == 1)
        return "";

    int N = A.size();
    string res = "";

    for (int i = 0; i < N; i++)
    {
        int cnt = 1;
        int j = i + 1;
        while (A[j] == A[i])
        {
            j++;
            cnt++;
        }
        if (cnt != B)
        {
            while (i < j)
            {
                res += A[i];
                i++;
            }
        }
        i = j - 1;
    }
    return res;
}
void solve1()
{
    string s;
    cin >> s;
    string ans = s;
    int r = 0;
    cin >> r;
    while (true)
    {
        ans = s;
        s = solve(ans, r);
        if (ans == s)
            break;
    }
    cout << ans;
    // bool finished = false;
    // do
    // {
    //     for (int i = 0; i < s.size(); ++i)
    //     {
    //         if (s[i] == s[i + r - 1])
    //         {
    //             bool check = true;
    //             for (int j = i; j < i + r; ++j)
    //             {
    //                 if (s[j] != s[i])
    //                     check = false;
    //             }
    //             if (check)
    //             {
    //                 i += r;
    //             }
    //         }
    //         ans += s[i];
    //     }
    // } while (!finished);

    // cout << ans;
}
void solve2()
{
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    int Xmin = 0, Xmax = 0, Ymin = 0, Ymax = 0;
    int x = 0, y = 0;
    for (char c : s)
    {
        if (c == 'L')
        {
            x--;
            Xmin = min(x, Xmin);
        }
        if (c == 'R')
        {
            x++;
            Xmax = max(x, Xmax);
        }
        if (c == 'F')
        {
            y++;
            Ymax = max(y, Ymax);
        }
        if (c == 'B')
        {
            y--;
            Ymin = min(y, Ymin);
        }
    }
    if (n <= (-Ymin + Ymax + 1) and m <= (-Xmin + Xmax + 1))
        cout << "Safe";
    else
        cout << "Unsafe";
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
