#include<iostream>
using namespace std;

void factorial(int n){
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact = fact*i;
    }
    cout<<fact<<endl;
}
int main(){

    // Write a Program to find factorial of a given number
    int n;
    cin>>n;

    factorial(n);
    return 0;
}