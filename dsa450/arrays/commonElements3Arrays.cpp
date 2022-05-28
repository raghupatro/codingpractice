#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
vector<int> commonElements(vector<int> &A, vector<int> &B, vector<int> &C, int n1, int n2, int n3)
{
    // code here.
    int i = 0, j = 0, k = 0;
    vector<int> res;
    int justpushed = 0;
    while (i < n1 && j < n2 && k < n3)
    {
        // cout << "i = " << i << " j = " << j << " k = " << k << endl;
        if (A[i] == B[j] and B[j] == C[k])
        {
            if (i >= 0 and A[i] != justpushed)
            {
                res.push_back(A[i]);
                justpushed = A[i];
            }
            i++;
            j++;
            k++;
        }
        else if (A[i] == min(A[i], min(B[j], C[k])))
        {
            i++;
        }
        else if (B[j] == min(A[i], min(B[j], C[k])))
        {
            j++;
        }
        else if (C[k] == min(A[i], min(B[j], C[k])))
        {
            k++;
        }
    }
    return res;
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("d:\\cp\\codingpractice\\input.txt", "r", stdin);
    freopen("d:\\cp\\codingpractice\\output.txt", "w", stdout);
#endif

    // vector<int> A{1, 2, 3, 4}, B{3, 4, 5, 6}, C{3, 4, 5};
    int p = 0, q = 0, r = 0;
    cin >> p >> q >> r;
    vector<int> A(p, 0), B(q, 0), C(r, 0);
    for (int &i : A)
        cin >> i;
    for (int &i : B)
        cin >> i;
    for (int &i : C)
        cin >> i;
    vector<int> res = commonElements(A, B, C, A.size(), B.size(), C.size());
    // for (int &i : A)
    // {
    //     cout << i << "\t";
    // }
    // cout << endl;
    // for (int &i : B)
    // {
    //     cout << i << "\t";
    // }
    // cout << endl;
    // for (int &i : C)
    // {
    //     cout << i << "\t";
    // }
    // cout << endl;
    // cout << "output file" << endl;
    for (int &i : res)
    {
        cout << i << "\t";
    }
    return 0;
}
