#include<bits/stdc++.h>
using namespace std;

// Brute Force Approach
bool pairsum(int arr[], int n, int k){
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i]+arr[j]==k){
                cout<<i<<" "<<j<<"\n";
                return true;
            }
        }
    }
    return false;
}
// Optimized solution (for sorted array)
bool pairsum1(int arr[], int n, int k){
    int low = 0, high = n-1;
    while(low<high){
        if(arr[low]+arr[high]==k){
            cout<<low<<" "<<high<<"\n";
            return true;
        }
        else if(arr[low]+arr[high]<k){
            low++;
        }
        else{
            high--;
        }
    }
    return false;
}
int main(){

    // check if there exists two elements in an array such that their sum is equal to given k
    // Pair sum problem
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    cout<<pairsum(arr,n,k)<<"\n";
    cout<<pairsum1(arr,n,k)<<"\n";
    return 0;
}