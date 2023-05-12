// given CheckIn and CheckOut timings of different customers
// in arrays CI and CO respectively, find the maximum number of customers
// that were in the hotel at a any given time.
// check in time : 12PM
// check out time : 10AM

// test case 1:
// n = 4
// CI : 1 2 3 4
// CO : 3 4 5 6
// ans : 3

// test case 2:
// n = 5
// CI : 1 2 3 4 5
// CO : 2 3 4 5 6
// ans : 1

// constraints:
// 0<=n<=100
// 1<=CI[i],CO[i]<=10000

#include <bits/stdc++.h>
using namespace std;

int solution1(vector<int> &CI, vector<int> &CO)
{
    // brute force solution
    // does not cover edge cases
    // 1 1
    //   1 1
    vector<int> hotel(10000, 0);
    for (int i = 0; i < CI.size(); ++i)
    {
        for (int j = CI[i]; j <= CO[i]; ++j)
        {
            hotel[j]++;
        }
    }
    int maxCustomers = 0;
    for (int &num : hotel)
    {
        maxCustomers = max(maxCustomers, num);
    }
    return maxCustomers;
}
int solution2(vector<int> &CI, vector<int> &CO)
{
    // brute force solution
    // maintain two extra arrays for checkin and checkout
    int hotelArraySize = 10;
    vector<int> hotel(hotelArraySize, 0);
    vector<int> checkin(hotelArraySize, 0);
    vector<int> checkout(hotelArraySize, 0);
    for (int i = 0; i < CI.size(); ++i)
    {
        for (int j = CI[i]; j <= CO[i]; ++j)
        {
            hotel[j]++;
        }
        checkin[CI[i]]++;
        checkout[CO[i]]++;
    }
    cout << endl
         << "hotel array:" << endl;
    for (const int &i : hotel)
        cout << i << "\t";
    cout << endl
         << "checkin array:" << endl;
    for (const int &i : checkin)
        cout << i << "\t";
    cout << endl
         << "checkout array:" << endl;
    for (const int &i : checkout)
        cout << i << "\t";
    // decrease hotel array elements
    // decrease by 2 till that day's checkin/checkout extra is balanced
    for (int i = 0; i < hotelArraySize; ++i)
    {
        while (checkin[i] > 0 or checkout[i] > 0)
        {
            checkin[i]--;
            checkout[i]--;
            hotel[i]--;
        }
    }
    int maxCustomers = 0;
    for (int &num : hotel)
    {
        maxCustomers = max(maxCustomers, num);
    }
    return maxCustomers;
}
int main1()
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
    // vector<int> CI = {1, 4, 6};
    // vector<int> CO = {5, 6, 7};
    vector<int> CI(n + 1, 0);
    vector<int> CO(n + 1, 0);
    for (int i = 1; i <= n; ++i)
    {
        cin >> CI[i];
    }
    for (int i = 1; i <= n; ++i)
    {
        cin >> CO[i];
    }
    cout << solution2(CI, CO) << endl;
    return 0;
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
    while (n--)
        cout << "check" << endl;
    return 0;
}
