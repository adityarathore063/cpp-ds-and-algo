#include<iostream>
using namespace std;

int main(){

    // Write a program to a simple calculator 
    int a, b;
    cout<<"Enter the two numbers: "<<endl;
    cin>>a>>b;
    char op;
    cout<<"Enter the opertor "<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    case '%':
        cout<<a%b<<endl;
        break;
    case '/':
        cout<<a/b<<endl;
        break;
    default:
        cout<<"Enter any other operator "<<endl;
        break;
    }

    return 0;
}