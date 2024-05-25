#include<bits/stdc++.h>
using namespace std;

void rev(string s){
    if(s.length()==0){
        return;
    }
    string ros = s.substr(1);
    rev(ros);
    cout<<s[0];
}
int main(){

    // Print the reverse of a string using recursion
    string s;
    cin>>s;
    rev(s);
    return 0;
}