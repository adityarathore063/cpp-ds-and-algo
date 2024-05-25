#include <bits/stdc++.h>
using namespace std;

// Brute force approach -> t.c. = O(n*n) aux. space = O(1)
int first_repeating(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                return i + 1;
            }
        }
    }
    return -1;
}

// in time complexity of O(nlogn) we can solve using sorting and binary search and aux. space = O(n)

// using hashing -> t.c = O(n) and aux. space = O(n)
int first_repeating1(int arr[], int n)
{
    int minidx = -1;
    set<int> s;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s.find(arr[i]) != s.end())
        {
            minidx = i;
        }
        else
        {
            s.insert(arr[i]);
        }
    }
    return minidx+1;
}
int main()
{

    // Given an array of size n. the task is to find the first repeating element in the array of integers
    // i.e. an element that occurs more than once and whose index of first occurrence is smallest

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << first_repeating(arr, n) << "\n";
    cout << first_repeating1(arr, n) << "\n";
    return 0;
}