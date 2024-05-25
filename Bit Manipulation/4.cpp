#include<bits/stdc++.h>
using namespace std;

bool power(int n){
    return (n && !(n&(n-1)));
}
int main(){

    //write a program to check the given number is power of 2
    int n;
    cin>>n; 
    cout<<power(n)<<"\n";

    return 0;
}