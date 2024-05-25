#include<iostream>
#include<math.h>
using namespace std;

int find_m(int a){
    int b = 0;
    while (a>0)
    {
        a = a/10;
        b++;
    }
    return b;
    
}

int main(){

    // Write a program to check if a number is Armstrong number
    int n;
    cin>>n;
    int m = find_m(n);
    int sum = 0;
    int original = n;
    int lastdigit;
    while(n>0){
        lastdigit = n%10;
        sum = round(sum) + pow(lastdigit,m);
        n = n/10;
    }
    if(sum==original){
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<"Not Armstrong Number"<<endl;
    }
    cout<<1%10<<endl;

    return 0;
}