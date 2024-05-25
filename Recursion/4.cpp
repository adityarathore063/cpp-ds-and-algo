#include<bits/stdc++.h>
using namespace std;

int fibb(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibb(n-1)+fibb(n-2);
}
int main(){

    // print the nth fibonacci number
    int n;
    cin>>n;
    cout<<fibb(n)<<"\n";

    return 0;
}