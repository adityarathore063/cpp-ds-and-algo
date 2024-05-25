#include<iostream>
using namespace std;

void fibb(int n){
    int term_1st = 0;
    int term_2nd = 1;
    int next_term;
    for(int i = 0; i<n; i++){
        cout<<term_1st<<" ";
        next_term = term_1st +term_2nd;
        term_1st = term_2nd;
        term_2nd = next_term;
    }
}
int main(){

    // Write a program to print Fibonacci Sequence
    int n;
    cin>>n;

    fibb(n);
    return 0;
}