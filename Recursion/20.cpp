#include<bits/stdc++.h>
using namespace std;

int friendsPairing(int n){
    if(n==0 || n==1 || n==2){
        return n;
    }

    return friendsPairing(n-1) + friendsPairing(n-2)*(n-1);
}
int main(){

    //Find the no. of ways in which n friends can remain single or can be in grouped(Friends Pairing problem)
    int n;
    cin>>n;
    cout<<friendsPairing(n)<<"\n";
    return 0;
}