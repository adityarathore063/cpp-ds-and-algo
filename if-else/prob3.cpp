#include<iostream>
using namespace std;

int main(){

    // program to find maximum among three numbers
    int a, b, c;
    cout<<"Enter the three numbers "<<endl;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"max = "<<a<<endl;
        }
        else{
            cout<<"max = "<<c<<endl;
        }
    }
    else{
        if(b>c){
            cout<<"max = "<<b<<endl;
        }
        else{
            cout<<"max = "<<c<<endl;
        }
    }

    return 0;
}