#include<bits/stdc++.h>
using namespace std;

void sieveprime(int n){
    vector<bool>arr(n+1,true);
    for(int i = 2; i<=n; i++){
        if(arr[i]){
            for(int j = i*i; j<=n; j+=i){
                arr[j]=false;
            }
        }
    }

    for(int i = 2; i<=n; i++){
        if(arr[i]){
            cout<<i<<" ";
        }
    }
    cout<<"\n";
}
int main(){

    // print all the prime numbers upto n using sieve of eratosthenes
    int n;
    cin>>n;
    sieveprime(n);

    return 0;
}