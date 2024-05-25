#include<bits/stdc++.h>
using namespace std;

int main(){

    // Write a program to print the maximum and minimum number respectively among three numbers entered
    // by the user
    int a, b, c;
    cin>>a>>b>>c;
    int max_num = max(a,max(b,c));
    int min_num = min(a,min(b,c));
    cout<<"max = "<<max_num<<endl;
    cout<<"min = "<<min_num<<endl;


    return 0;
}