#include<bits/stdc++.h>
using namespace std;

void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<a<<endl;
    cout<<b<<endl;
}
int main(){

    // Write a program with a function to swap the values of 2 given integers variables

    int a, b;
    cin>>a>>b;
    swap(a,b);
    // cout<<a<<" "<<b<<endl;
    return 0;
}