#include <bits/stdc++.h>
using namespace std;

void subarray_sum(int arr[], int n, int s)
{
    int curr_sum, i, j;
    for (i = 0; i < n; i++)
    {
        curr_sum = arr[i];
        for (int j = i + 1; j <= n; j++)
        {
            if (curr_sum == s)
            {
                cout << i << " " << j - 1 << "\n";
                return;
            }
            if (curr_sum > s || j == n)
            {
                break;
            }
            curr_sum = curr_sum + arr[j];
        }
    }
}
int main()
{

    // Given an unsorted array A of size N of non-negative integers , find a contigous subarray which adds to
    // given number S
    int n, s;
    cin >> n >> s;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0, j = 0, st = -1, en = -1, sum = 0;
    while (j < n && sum + arr[j] <= s)
    {
        sum += arr[j];
        j++;
    }
    if (sum == s)
    {
        cout << i + 1 << " " << j << "\n";
        return 0;
    }

    while (j < n)
    {
        sum += arr[j];
        while (sum > s)
        {
            sum -= arr[i];
            i++;
        }

        if (sum == s)
        {
            st = i + 1;
            en = j + 1;
            break;
        }
        j++;
    }

    cout << st << " " << en << " \n";
    subarray_sum(arr, n, s);
    return 0;
}