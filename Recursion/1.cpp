#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    return n+sum(n-1);
}
int main(){

    // Find the sum upto n
    int n;
    cin>>n;
    cout<<sum(n)<<"\n";
    return 0;
}