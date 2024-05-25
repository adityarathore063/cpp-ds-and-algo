#include<bits/stdc++.h>
using namespace std;

int get_bit(int n, int i){
    if((n&(1<<i))!=0){ // 1&(n>>i)!=0
        return 1;
    }
    else{
        return 0;
    }
}
int main(){

    // Get bit (Find the bit at position i in given number)
    int n,i;
    cin>>n>>i;
    cout<<get_bit(n,i)<<"\n";
    return 0;
}