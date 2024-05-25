#include<bits/stdc++.h>
using namespace std;

int main(){

    int a = 10;
    int *ptr = &a;
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl; // dereferencing 

    *ptr = 20;
    cout<<*ptr<<endl;

    return 0;
}