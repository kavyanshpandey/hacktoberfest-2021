#include <bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int memRecursion(int W, int wt[], int val[], int n)
{
    if (W == 0 || n == 0)
    {
        return 0;
    }
    if (dp[n][W] != -1)
    {
        return dp[n][W];
    }
    if (wt[n - 1] <= W)
    {
        return dp[n][W] = max((val[n - 1] + memRecursion(W - wt[n - 1], wt, val, n - 1)),
                              memRecursion(W, wt, val, n - 1));
    }
    else
        return dp[n][W] = memRecursion(W, wt, val, n - 1);
}
int knapSack(int W, int wt[], int val[], int n)
{
    memset(dp, -1, sizeof(dp));
    return memRecursion(W, wt, val, n);
}
int main()
{
    int n, w;
    cin >> n >> w;
    int val[n];
    int wt[n];
    for (int i = 0; i < n; i++)
        cin >> val[i];
    for (int i = 0; i < n; i++)
        cin >> wt[i];
    cout << knapSack(w, wt, val, n) << endl;
    return 0;
}