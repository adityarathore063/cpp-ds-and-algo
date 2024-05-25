#include<iostream>
using namespace std;

int main(){

    // Print first n terms of Fibonacci Series with starting terms as 0, 1
    int n;
    cin>>n;

    if(n==1){
        cout<<"0"<<endl;
    }
    else if(n==2){
        cout<<"0 1"<<endl;
    }
    else{
        int a=0;
        int b=1;
        int c;
        for(int i = 0; i<n; i++){
            cout<<a<<" ";
            c = a + b;
            a = b;
            b = c;
        }
    }

    return 0;
}