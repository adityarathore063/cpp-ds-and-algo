#include<bits/stdc++.h>
using namespace std;

void voting(int age){
    if(age>=18){
        cout<<"Eligble for voting"<<endl;
    }
    else{
        cout<<"Not eligble"<<endl;
    }
}
int main(){

    // write a program using function to check if a person is eligble
    // for voting or not by comparing his age with legal voting age is i.e. 18

    int age;
    cin>>age;
    voting(age);   

    return 0;
}