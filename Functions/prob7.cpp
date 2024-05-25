#include<bits/stdc++.h>
using namespace std;

void check_even_odd(int n){
    if(n%2==0){
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
}
int main(){

    // Write a program to find out whether a given number is even or odd using functions
    int n;
    cin>>n;
    check_even_odd(n);

    return 0;
}