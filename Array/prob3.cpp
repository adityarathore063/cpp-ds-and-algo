#include<bits/stdc++.h>
using namespace std;

int main(){

    // Given an array of size n. output sum of each subarray of the given array
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum+=arr[j];
            cout<<sum<<" ";
        }
    }

    return 0;
}