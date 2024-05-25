#include<iostream>
using namespace std;

int main(){

    // check the two numbers are equal or greater or smaller
    int a, b;
    cout<<"Enter the two numbers a and b "<<endl;
    cin>>a>>b;
    if(a==b){
        cout<<"a is equal to b "<<endl;
    }
    else{
        if(a>b){
            cout<<"a is greater than b"<<endl;
        }
        else{
            cout<<"b is greater than a "<<endl;
        }
    }


    return 0;
}