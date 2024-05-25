#include<iostream>
using namespace std;

int main(){

    // write a program to print all odd numbers till n.
    int n;
    cin>>n;
    for(int i = 0; i<=n; i++){
        if(i%2==0){
            continue;
        }
        cout<<i<<endl;
    }

    return 0;
}