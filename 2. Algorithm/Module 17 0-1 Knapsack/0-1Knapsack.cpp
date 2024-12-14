#include <bits/stdc++.h>
using namespace std;
int knapsack(int n, int weight[], int value[], int w)
{
    if (n == 0 || w == 0)
        return 0; // this is the base case. the function will end when the n or w will be 0.
    if (weight[n-1] <= w)
    {
        // if the nth weight is less than the total bag weight, then put it in the bag for now
        int option1 = knapsack(n - 1, weight, value, w - weight[n-1]) + value[n-1]; // taing the nth value, also add the nth value to the value recursive return
        int option2 = knapsack(n - 1, weight, value, w); // not taking the nth value
        return max(option1, option2);
    }
    else
    {
        // if the nth item weight is larger than the bag weight. we won't be able to take it
        int option2 = knapsack(n - 1, weight, value, w); // not taking the nth value
        return option2;
    }
}
int main()
{
    int n;
    cin >> n;
    int weight[n], value[n];
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
    }
    int w;
    cin >> w;
    cout << knapsack(n, weight, value, w) << endl;

    return 0;
}