#include<bits/stdc++.h>
using namespace std;

int longest_arith_subarray(int arr[], int n){
    int pd = arr[1]-arr[0];
    int curr_len = 2;
    int ans_len = 2;
    int j = 2;
    while(j<n){
        if(pd==arr[j]-arr[j-1]){
            curr_len++;
        }
        else{
            pd = arr[j]-arr[j-1];
            curr_len = 2;
        }
        ans_len = max(ans_len,curr_len);
        j++;
    }
    return ans_len;
}
int main(){

    // Longest Arithmetic subarray
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<longest_arith_subarray(arr, n)<<"\n";
    return 0;
}