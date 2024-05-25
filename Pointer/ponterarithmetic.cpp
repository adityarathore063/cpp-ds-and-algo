#include<bits/stdc++.h>
using namespace std;

int main(){

    // int a = 10;
    // int *ptr = &a;
    // cout<<ptr<<endl;

    // ptr++;
    // cout<<ptr<<endl; // gives address of after 4 bytes

    // char c = 'a';
    // char *cptr = &c;
    // cout<<cptr<<endl;

    // cptr++;
    // cout<<cptr<<endl;

    // Pointer and arrays 
    int arr[] = {10, 20, 30};
    cout<<*arr<<endl;

    int *ptr = arr;
    for(int i = 0; i<3; i++){
        cout<<*ptr<<endl;
        ptr++;
    }
    // another way
    for(int i = 0; i<3; i++){
        cout<<*(arr+i)<<endl;
        // arr++; gives error
    }

    return 0;
}