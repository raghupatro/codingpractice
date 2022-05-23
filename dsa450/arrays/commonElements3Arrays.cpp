#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
vector<int> commonElements(vector<int> &A, vector<int> &B, vector<int> &C, int n1, int n2, int n3)
{
    // code here.
    int i = 0, j = 0, k = 0;
    vector<int> res;
    while (i < n1 && j < n2 && k < n3)
    {
        if (A[i] == B[j] and B[j] == C[k])
        {
            res.push_back(A[i]);
            i++;
            j++;
            k++;
        }
        else if (A[i] == min(A[i], min(B[i], C[i])))
        {
            i++;
        }
        else if (B[i] == min(A[i], min(B[i], C[i])))
        {
            j++;
        }
        else if (C[i] == min(A[i], min(B[i], C[i])))
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

    vector<int> A{1, 2, 3, 4}, B{3, 4, 5, 6}, C{3, 4, 5};
    vector<int> res = commonElements(A, B, C, A.size(), B.size(), C.size());
    cout << "output file" << endl;
    for (int &i : res)
    {
        cout << i << "\t";
    }
    return 0;
}
