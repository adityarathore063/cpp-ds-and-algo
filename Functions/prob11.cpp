#include<bits/stdc++.h>
using namespace std;

void sum(int n){
    int ans = (n*(n+1))/2;
    cout<<ans<<endl;
}
void add(int n){
    int ans = 0;
    for(int i = 1; i<=n; i++){
        ans+=i;
    }
    cout<<ans<<endl;
}
int main(){

    // Write a program to find sum of first n natural numbers 
    int n;
    cin>>n;
    sum(n);
    add(n);

    return 0;
}