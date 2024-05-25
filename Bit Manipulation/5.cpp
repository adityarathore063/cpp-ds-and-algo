#include<bits/stdc++.h>
using namespace std;

int count(int n){
    int res = 0;
    while(n>0){
        n = n&(n-1);
        res++;
    }
    return res;
}
int main(){

    // write a program to count the number of ones in binary reresentation of a number
    // logic -> (n&(n-1)) has same bits as n except the rightmost set bit
    int n;
    cin>>n;
    cout<<count(n)<<"\n";
    return 0;
}