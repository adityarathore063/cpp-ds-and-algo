#include <bits/stdc++.h>
using namespace std;

int first(int arr[], int n, int i, int key)
{
    if (i == n)
        return -1;
    if (arr[i] == key)
        return i;
    return first(arr, n, i + 1, key);
}

int last(int arr[], int n, int i, int key){
    if(i==-1)
        return -1;
    if(arr[i]==key)
        return i;
    return last(arr, n, i-1, key);
}

int lastocc(int arr[], int n, int i, int key){
    if(i==n){
        return -1;
    }
    int restArray = lastocc(arr, n, i+1, key);
    if(restArray!=-1){
        return restArray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;

}
int main()
{
    // Find the first and last occurrence of an element in an array
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<first(arr, n, 0, 2)<<"\n";
    cout<<last(arr, n, n-1, 2)<<"\n";
    return 0;
}