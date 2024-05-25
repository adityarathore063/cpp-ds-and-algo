#include<iostream>
using namespace std;

int main(){

    //Write a program to print all prime numbers in a given range .
    int a, b;
    cin>>a>>b;
    int j;
    for(int i = a; i<=b; i++){
        for(j = 2; j < i; j++){
            if(i%j==0){
                break;
            }
        }
        if(i==j){
            cout<<i<<endl;
        }
    }

    return 0;
}