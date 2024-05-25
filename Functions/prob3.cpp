#include<iostream>
using namespace std;

void print_prime(int a, int b){
    for(int i = a; i<=b; i++){
        int j;
        for(j = 2; j<i; j++){
            if(i%j==0){
                break;
            }
        }
        if(i==j){
            cout<<i<<" ";
        }
        
    }
}
int main(){

    // Write a program to print all prime numbers between 2 given numbers 
    int a, b;
    cin>>a>>b;
    print_prime(a, b);
    return 0;
}