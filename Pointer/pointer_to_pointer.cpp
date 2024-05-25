#include<bits/stdc++.h>
using namespace std;

int main(){

    int a = 10;
    int *p = &a;

    int **q = &p; // pointer to pointer
    cout<<*q<<endl; // gives the value of p
    cout<<**q<<endl; // gives the value of a (here is two times dereferencing)

    return 0;
}