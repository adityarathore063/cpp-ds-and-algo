#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    while(b!=0){
        int rem = a%b;
        a =b;
        b = rem;
    }
    return a;
}
int main(){

    // Euclid Algorithm for finding GCD
    int a, b;
    cin>>a>>b;
    cout<<gcd(a,b)<<"\n";
    return 0;
}