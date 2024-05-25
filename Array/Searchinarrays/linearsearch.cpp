#include <bits/stdc++.h>
using namespace std;

int linearsearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
        
    }
    return -1;
}
int main()
{

    // in a given array of size n search the key is present or not if present output its index and if not output -1
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin>>key;
    cout << linearsearch(arr, n, key);

    return 0;
}