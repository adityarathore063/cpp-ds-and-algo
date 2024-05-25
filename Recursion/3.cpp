#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main(){

    // Find the factorial of a number
    int n;
    cin>>n;
    cout<<fact(n)<<"\n";
    return 0;
}