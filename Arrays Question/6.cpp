#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach
int max_Subarray(int arr[], int n)
{
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            maxsum = max(maxsum, sum);
        }
    }
    return maxsum;
}
// Cumulative Sum Approach(prefix sum technique)
int max_subarray1(int arr[], int n)
{
    int currsum[n + 1];
    currsum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        currsum[i] = currsum[i - 1] + arr[i - 1];
    }
    int maxsum = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum = currsum[i] - currsum[j];
            maxsum = max(sum, maxsum);
        }
    }
    return maxsum;
}

// Kadane's Algorithm
int maxSubarray(int arr[], int n)
{
    int currsum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currsum += arr[i];
        if (currsum < 0)
        {
            currsum = 0;
        }
        maxsum = max(maxsum, currsum);
    }
    return maxsum;
    
}
int main()
{

    //  Find the subarray in an array which has maximum sum (Maiximum Subarray Sum)
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << max_Subarray(arr, n) << "\n";
    cout << max_subarray1(arr, n) << "\n";
    cout << maxSubarray(arr, n) << "\n";
    return 0;
}