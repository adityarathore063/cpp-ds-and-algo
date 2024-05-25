#include<bits/stdc++.h>
using namespace std;

int one_unique(int arr[], int n){
    int res = 0; 
    for(int i = 0; i<n; i++){
        res = res^arr[i];
    }
    return res;
}
int main(){

    // write a program to find a unique number in an array where all numbers except one are present twice
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<one_unique(arr, n)<<"\n";
    return 0;
}