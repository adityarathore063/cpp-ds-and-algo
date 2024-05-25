#include<iostream>
using namespace std;

int main(){

    // write a program to display all the factors of a given number
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++){
        if(n%i==0){
            cout<<i<<" ";
        }
        else{
            continue;
        }
    }

    return 0;
}