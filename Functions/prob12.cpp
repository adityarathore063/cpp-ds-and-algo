#include<bits/stdc++.h>
using namespace std;

void pythagorian(int a, int b, int c){
    int x = max(a,max(b, c));
    int y, z;
    if(x==a){
        y=b;
        z=c;
    }
    else if(x==b){
        y=a;
        z=c;
    }
    else{
        y=a;
        z=b;
    }
    if(x*x == y*y + z*z){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){

    // Write a program to check the given triplet is pythagorian or not
    int a, b, c;
    cin>>a>>b>>c;
    pythagorian(a, b, c);
       

    return 0;
}