#include<bits/stdc++.h>
using namespace std;

void substring(string s, string ans){
    if(s.length()==0){
        cout<<ans<<"\n";
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);

    substring(ros, ans);
    substring(ros, ans+ch);
}
int main(){

    // Generate all substring of a string using recursion
    string s;
    cin>>s;
    substring(s, "");
    return 0;
}