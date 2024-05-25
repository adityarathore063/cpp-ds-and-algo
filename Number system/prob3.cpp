#include<iostream>
using namespace std;

int main(){

    // Write a program to print all the digits of a positive decimal number from right to left
    int n;
    cin>>n;
    while(n>0){
        int digit = n%10;
        cout<<digit<<endl;
        n = n/10;
    }

    return 0;
}   