#include<iostream>
using namespace std;

int main(){

    // Program to find maximum, minimum among two numbers
    int a, b;
    cout<<"Enter the two numbers "<<endl;
    cin>>a>>b;
    int max, min;
    if(a>b){
        max = a;
        min = b;
    }
    else{
        max = b;
        min = a;
    }
    cout<<"maximum = "<<max<<endl;
    cout<<"minimum = "<<min<<endl;
    return 0;
}