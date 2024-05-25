#include<bits/stdc++.h>
using namespace std;

// checking at the given position pos bit is set or not
bool getbit(int n, int pos){
    return ((n & (1<<pos))!=0);
}
// setting the bit is set at given position
int setbit(int n, int pos){
    return (n|(1<<pos));
}
int unique3(int arr[], int n){
    int result = 0;
    for(int i = 0; i<64; i++){
        int sum = 0;
        for(int j = 0; j<n; j++){
            if(getbit(arr[j], i)){
                sum++;
            }
        }
        if(sum%3!=0){
            result = setbit(result, i);
        }
    }
    return result;
}
int main(){

    // write a program to find a unique number in an array where all numbers except one are present thrice;
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<unique3(arr, n)<<"\n";
    return 0;
}