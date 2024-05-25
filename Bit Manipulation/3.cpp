#include<bits/stdc++.h>
using namespace std;

int clear_bit(int n, int i){
    return (n&(~(1<<i)));
}
int main(){

    // clear bit means make the bit at position 0
    int n, i;
    cin>>n>>i;
    cout<<clear_bit(n,i)<<"\n";
    return 0;
}