#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){

    // passing pointer in a function(call by reference)
    int a = 2;
    int b = 3;

    int *aptr = &a;
    int *bptr = &b;

    swap(aptr, bptr);
    // swap(&a,&b); also use without declaring ponter
    cout<<a<<endl;
    cout<<b<<endl;

    return 0;
}