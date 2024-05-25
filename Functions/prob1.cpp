#include<iostream>
using namespace std;

int add(int a, int b){
    int sum = a + b;
    return sum;
}
int main(){

    // Write a program to add 2 numbers using functions
    int a, b;
    cin>>a>>b;
    cout<<add(a,b)<<endl;

    return 0;
}