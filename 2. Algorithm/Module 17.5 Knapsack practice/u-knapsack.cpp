// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U

#include <bits/stdc++.h>
using namespace std;
const int maxN = 1000;
const int maxW = 1000;
int dp[maxN][maxW];
int knapsack(int n, vector<int> weight, vector<int> value, int w)
{
    if (n - 1 < 0 || w == 0)
    {
        return 0;
    }

    if (dp[n][w] != -1)
    {
        return dp[n][w];
    }

    // if wieght of value is less than the total value then move ahead
    if (weight[n - 1] <= w)
    {
        int op1 = knapsack(n - 1, weight, value, w - weight[n - 1]) + value[n - 1];
        int op2 = knapsack(n - 1, weight, value, w);

        return dp[n][w] = max(op1, op2);
    }
    else
    {
        int op2 = knapsack(n - 1, weight, value, w);
        return op2;
    }
}
int main()
{

    int n, w;
    cin >> n >> w;

    // int weight[n];
    // int value[n];
    // weight.push(1);

    vector<int> weight;
    vector<int> value;

    for (int i = 1; i <= n; i++)
    {

        int w, v;
        cin >> w >> v;
        weight.push_back(w);
        value.push_back(v);
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout << knapsack(n, weight, value, w) << endl;

    return 0;
}