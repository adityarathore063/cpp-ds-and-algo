#include <bits/stdc++.h>
using namespace std;

int knapsack(int value[], int wt[], int n, int w)
{
    if (n == 0 || w == 0)
    {
        return 0;
    }
    if (wt[n - 1] > w)
    {
        return knapsack(value, wt, n - 1, w);
    }

    return max((knapsack(value, wt, n - 1, w - wt[n - 1]) + value[n - 1]), knapsack(value, wt, n - 1, w));
}
int main()
{

    // put n items with given weight and value in a knapsack of capacity W to get the maximum total
    // value in the knapsack (0-1 knapsack problem)
    int wt[] = {10, 20, 30};
    int value[] = {100, 50, 150};
    int w = 50;

    cout << knapsack(value, wt, 3, w);

    return 0;
}