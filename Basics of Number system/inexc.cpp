#include<bits/stdc++.h>
using namespace std;

int divisibility(int n, int a, int b){
    int c1 = n/a;
    int c2 = n/b;
    int c3 = n/(a*b);
    return (c1+c2-c3);
}
int main(){

    // How many numbers between 1 and n are divisible by a or b
    int n, a, b;
    cin>>n>>a>>b;
    cout<<divisibility(n,a,b)<<"\n";
    return 0;
}