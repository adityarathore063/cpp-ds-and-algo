#include<bits/stdc++.h>
using namespace std;

int main(){

    // Declaration and access
    char arr[100] = "apple";
    int i = 0;
    while(arr[i]!='\0'){
        cout<<arr[i]<<endl;
        i++;
    }
    // input and output 
    int n;
    cin>>n;

    char a[n+1];
    cin>>a;
    cout<<a<<endl;;

    // if want to access particular characrter at some index

    cout<<a[3];
    return 0;
}