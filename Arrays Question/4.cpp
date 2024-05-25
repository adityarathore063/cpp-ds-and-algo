#include <bits/stdc++.h>
using namespace std;

int record_breaking(int arr[], int n)
{
    if (n == 1)
    {
        return 1;
    }
    int ans = 0;
    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        // For first element
        if (i == 0 && arr[0] > arr[1])
        {
            ans++;
        }
        // For last element
        else if (i == n - 1 && arr[i] > mx)
        {
            ans++;
        }
        // General case
        else if (arr[i] > mx && arr[i] > arr[i + 1])
        {
            ans++;
        }
        mx = max(mx, arr[i]);
    }
    return ans;
}
int main()
{

    // Record breaking day
    int n;
    cin >> n;
    int arr[n + 1];
    arr[n] = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << record_breaking(arr, n) << "\n";
    return 0;
}