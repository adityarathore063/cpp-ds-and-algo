#include<bits/stdc++.h>
using namespace std;

int tillngWays(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return tillngWays(n-1)+tillngWays(n-2);
}
int main(){

    // Given a "2 x n" board and tiles of size "2 x 1", count the no of ways to tile the given board using these tiles
    int n;
    cin>>n;
    cout<<tillngWays(n)<<"\n";
    return 0;
}