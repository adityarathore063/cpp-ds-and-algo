#include<bits/stdc++.h>
using namespace std;

int power(int n, int p){
    if(p==0){
        return 1;
    }
    return n*power(n, p-1);
}
int main(){

    // calculate n raised to power of p (n*n*n*........p times)
    int n, p;
    cin>>n>>p;
    cout<<power(n, p)<<"\n";

    return 0;
}