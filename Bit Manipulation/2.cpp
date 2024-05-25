#include<bits/stdc++.h>
using namespace std;

int set_bit(int n, int i){
    return (n|(1<<i));
}
int main(){

    // set bit at the given position
    int n, i;
    cin>>n>>i;
    cout<<set_bit(n,i)<<"\n";
    return 0;
}