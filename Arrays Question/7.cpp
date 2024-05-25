#include <bits/stdc++.h>
using namespace std;

int circular_subarray_sum(int arr[], int n)
{
    int total_array_sum = 0;
    for (int i = 0; i < n; i++)
    {
        total_array_sum += arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = -arr[i];
    }
    int currsum = 0;
    int contributin_ele_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currsum += arr[i];
        if (currsum < 0)
        {
            currsum = 0;
        }
        contributin_ele_sum = max(contributin_ele_sum, currsum);
    }

    int ans = total_array_sum + contributin_ele_sum;
    return ans;
}
int main()
{

    // Maximum Circular subarray sum
    // max circular subarray sum = total array sum - sum of non contributing elements
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    return 0;
}