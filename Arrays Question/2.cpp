#include <bits/stdc++.h>
using namespace std;

void subarray_sum(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            cout << sum << "\n";
        }
    }
}
int main()
{

    // Given an array of size n output sum of each subarray of the given array
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    subarray_sum(arr, n);
    return 0;
}