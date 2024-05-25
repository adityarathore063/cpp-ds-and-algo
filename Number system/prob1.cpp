#include<iostream>
#include<cmath>
using namespace std;

int main(){

    // Write a program to check if a number is prime or not
    int n;
    cin>>n;
    bool flag = 0;
    for(int i = 2; i<=sqrt(n); i++){
        if(n%2==0){
            cout<<"Not Prime"<<endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0){
        cout<<"Prime"<<endl;
    }


    return 0;
}